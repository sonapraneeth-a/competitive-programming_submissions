// clang-format off
/**
 * COPYRIGHT NOTICE
 *
 * Copyright (c) 2021. Sona Praneeth Akula <sonapraneeth.akula@gmail.com>
 *
 * This file is part of leetcode practice(submit) in competitive programming.
 *
 * This file cannot be copied and/or distributed without the express
 * permission of the copyright owner.
 *
 */

/**
 * FILE DESCRIPTION
 *
 *        Filename: 785__is-graph-bipartite/solutions.cpp
 *      Created on: 05 September 2021
 *   Last modified: 05 September 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Is Graph Bipartite?' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 05-09-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <memory>
#include <queue>
#include <unordered_set>
#include <vector>

using std::make_unique;
using std::queue;
using std::swap;
using std::unique_ptr;
using std::unordered_set;
using std::vector;

namespace solution_01 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail//
 * Status: .  /  test cases passed.
 * Runtime:  ms, faster than % of C++ online submissions
 * Memory usage:  MB, less than % of C++ online submissions
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
    bool isBipartite(vector<vector<int>> &graph) {
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
};
}  // namespace solution_01

namespace solution_02 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail//
 * Status: .  /  test cases passed.
 * Runtime:  ms, faster than % of C++ online submissions
 * Memory usage:  MB, less than % of C++ online submissions
 * Time complexity:
 * Space complexity:
 * Tags:
 * Categories:
 * Additional notes
 *  -
 */
// clang-format on
class Solution {
 private:
    bool dfs(vector<vector<int>> &graph, int source, unordered_set<int> &set_a,
             unordered_set<int> &set_b) {
        set_a.insert(source);
        for (const auto &neighbour : graph[source]) {
            // We cannot have source and neighbour in the same set
            if (set_a.find(neighbour) != set_a.end()) {
                return false;
            }
            if (set_b.find(neighbour) == set_b.end()) {
                set_b.insert(neighbour);
                if (!dfs(graph, neighbour, set_b, set_a)) {
                    return false;
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
    bool isBipartite(vector<vector<int>> &graph) {
        unordered_set<int> set_a, set_b;
        int                number_of_nodes = static_cast<int>(graph.size());
        for (int node_no = 0; node_no < number_of_nodes; ++node_no) {
            if (set_b.find(node_no) == set_b.end() &&
                set_a.find(node_no) == set_a.end()) {
                if (!dfs(graph, node_no, set_a, set_b)) {
                    return false;
                }
            }
        }
        return true;
    }
};
}  // namespace solution_02

namespace solution_03 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail//
 * Status: .  /  test cases passed.
 * Runtime:  ms, faster than % of C++ online submissions
 * Memory usage:  MB, less than % of C++ online submissions
 * Time complexity:
 * Space complexity:
 * Tags:
 * Categories:
 * Additional notes
 *  -
 */
// clang-format on
class Solution {
 private:
    bool dfs(vector<vector<int>> &graph, int source, vector<char> &color) {
        for (const auto &neighbour : graph[source]) {
            if (color[neighbour] == 'U') {
                color[neighbour] = color[source] == 'R' ? 'B' : 'R';
                if (!dfs(graph, neighbour, color)) {
                    return false;
                }
            }
            if (color[source] == color[neighbour]) {
                return false;
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
    bool isBipartite(vector<vector<int>> &graph) {
        int          number_of_nodes = static_cast<int>(graph.size());
        vector<char> color(number_of_nodes, 'U');
        for (int node_no = 0; node_no < number_of_nodes; ++node_no) {
            if (color[node_no] == 'U') {
                color[node_no] = 'R';
                if (!dfs(graph, node_no, color)) {
                    return false;
                }
            }
        }
        return true;
    }
};
}  // namespace solution_03

namespace solution_04 {
// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Submission link: https://leetcode.com/submissions/detail//
 * Status: .  /  test cases passed.
 * Runtime:  ms, faster than % of C++ online submissions
 * Memory usage:  MB, less than % of C++ online submissions
 * Time complexity:
 * Space complexity:
 * Tags:
 * Categories: Disjoint set
 * Additional notes
 *  -
 */
// clang-format on
class Solution {
 private:
    class DisjointSet {
     private:
        std::vector<int> _ds;

     public:
        explicit DisjointSet(int N) { _ds.resize(N, -1); }
        // Path compression
        int  find(int x) { return _ds[x] < 0 ? x : _ds[x] = find(_ds[x]); }
        void union_parents(int parent_x, int parent_y) {
            if (parent_x != parent_y) {
                if (-_ds[parent_x] < -_ds[parent_y]) {
                    swap(parent_x, parent_y);
                }
                _ds[parent_x] += _ds[parent_y];
                _ds[parent_y] = parent_x;
            }
        }
    };

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
    bool isBipartite(vector<vector<int>> &graph) {
        int number_of_nodes        = static_cast<int>(graph.size());
        unique_ptr<DisjointSet> ds = make_unique<DisjointSet>(number_of_nodes);
        for (int idx = 0; idx < number_of_nodes; ++idx) {
            int source_parent = ds->find(idx), node_parent = -1;
            if (!graph[idx].empty()) {
                node_parent = ds->find(graph[idx][0]);
            }
            for (int &neighbour : graph[idx]) {
                int neighbour_parent = ds->find(neighbour);
                node_parent          = ds->find(graph[idx][0]);
                if (source_parent == neighbour_parent && source_parent != -1) {
                    return false;
                }
                if (neighbour_parent >= 0 || node_parent >= 0) {
                    ds->union_parents(neighbour_parent, node_parent);
                }
            }
        }
        return true;
    }
};
}  // namespace solution_04
