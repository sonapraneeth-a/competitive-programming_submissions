// clang-format off
/**
 * COPYRIGHT NOTICE
 *
 * Copyright (c) 2021. Sona Praneeth Akula <sonapraneeth.akula@gmail.com>
 *
 * This file is part of google/kickstart practice(submit) in competitive programming.
 *
 * This file cannot be copied and/or distributed without the express
 * permission of the copyright owner.
 *
 */

/**
 * FILE DESCRIPTION
 *
 *        Filename: bad-horse/submit.cpp
 *      Created on: 08 September 2021
 *   Last modified: 08 September 2021
 *          Author: sonapraneeth_a
 *     Description: Google/KickStart submission for 'Bad Horse' problem
 * Compile command: g++ submit.cpp -std=c++17 -pthread -O2 -o submit
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 08-09-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <iostream>
#include <memory>
#include <queue>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::make_unique;
using std::queue;
using std::stoi;
using std::string;
using std::stringstream;
using std::unique_ptr;
using std::unordered_map;
using std::vector;
using std::ws;

// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Status:
 * Time complexity:
 * Space complexity:
 * Tags:
 * Categories:
 * Additional notes
 *  -
 */
// clang-format on
class Solution {
 public:
    virtual bool solve(const vector<vector<string>> &rival_pairs, int M) = 0;

    // Required to avoid errors
    // in instantiation of member function
    // 'std::unique_ptr<Solution_01>::~unique_ptr' requested here
    virtual ~Solution() = default;

    // clang-format off
    /**
     * FUNCTION DESCRIPTION
     *
     * Time complexity:
     * Space complexity:
     * Additional notes
     *  -
     */
    // clang-format on
    void run() {
        int T = 0, M = 0;
        // Read number of tests
        cin >> T;
        for (int test_no = 1; test_no <= T; ++test_no) {
            cin >> M;
            string                 rival_pair;
            vector<vector<string>> rival_pairs(M, {"", ""});
            for (int idx = 0; idx < M; ++idx) {
                getline(cin >> ws, rival_pair);
                stringstream ss(rival_pair);
                string       name;
                int          pair_no = 0;
                while (getline(ss, name, ' ')) {
                    rival_pairs[idx][pair_no++] = name;
                }
            }
            bool answer = solve(rival_pairs, M);
            print_answer(test_no, answer);
        }
    }

    static void print_answer(int test_no, bool answer) {
        cout << "Case #" << test_no << ": " << (answer ? "Yes" : "No") << "\n";
    }
};

// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Status: Small Accepted. Large Accepted
 * Time complexity:
 * Space complexity:
 * Tags:
 * Categories:
 * Additional notes
 *  -
 */
// clang-format on
class Solution_01 : public Solution {
 private:
    // clang-format off
    /**
     * FUNCTION DESCRIPTION
     *
     * Time complexity:
     * Space complexity:
     * Additional notes
     *  -
     */
    // clang-format on
    bool is_bipartite(const vector<vector<int>> &graph) {
        int          number_of_nodes = static_cast<int>(graph.size());
        vector<char> color(number_of_nodes, 'U');
        for (int node_no = 0; node_no < number_of_nodes; ++node_no) {
            if (color[node_no] != 'U') {
                continue;
            }
            queue<int> bfs;
            bfs.push(node_no);
            color[node_no] = 'R';
            while (!bfs.empty()) {
                auto source = bfs.front();
                bfs.pop();
                char source_color = color[source];
                for (const auto &neighbour : graph[source]) {
                    if (color[neighbour] == source_color) {
                        return false;
                    }
                    if (color[neighbour] == 'U') {
                        color[neighbour] = source_color == 'R' ? 'B' : 'R';
                        bfs.push(neighbour);
                    }
                }
            }
        }
        return true;
    }

 public:
    // clang-format off
    /**
     * FUNCTION DESCRIPTION
     *
     * Time complexity:
     * Space complexity:
     * Additional notes
     *  -
     */
    // clang-format on
    bool solve(const vector<vector<string>> &rival_pairs, int M) override {
        vector<vector<int>>        graph(M << 1, vector<int>());
        unordered_map<string, int> name_to_id_map;
        int                        name_id = 0;
        for (const auto &rival_pair : rival_pairs) {
            int  source = -1, dest = -1;
            auto itr = name_to_id_map.find(rival_pair[0]);
            if (itr == name_to_id_map.end()) {
                name_to_id_map.insert({rival_pair[0], name_id++});
                source = name_id - 1;
            } else {
                source = itr->second;
            }
            itr = name_to_id_map.find(rival_pair[1]);
            if (itr == name_to_id_map.end()) {
                name_to_id_map.insert({rival_pair[1], name_id++});
                dest = name_id - 1;
            } else {
                dest = itr->second;
            }
            graph[source].emplace_back(dest);
            graph[dest].emplace_back(source);
        }
        while (graph.back().empty()) {
            graph.pop_back();
        }
        return is_bipartite(graph);
    }
};

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int solution_no = 1;
    if (argc >= 2) {
        solution_no = stoi(argv[1]);
    }
    unique_ptr<Solution> sol;
    switch (solution_no) {
        case 1:
            sol = make_unique<Solution_01>();
            break;
        default:
            cout << "Solution " << solution_no << " does not exist\n";
            exit(1);
    }
    sol->run();
    return 0;
}
