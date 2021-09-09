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
 *        Filename: moist/submit.cpp
 *      Created on: 07 September 2021
 *   Last modified: 07 September 2021
 *          Author: sonapraneeth_a
 *     Description: Google/KickStart submission for 'Moist' problem
 * Compile command: g++ submit.cpp -std=c++17 -pthread -O2 -o submit
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 07-09-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <deque>
#include <ios>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::deque;
using std::getline;
using std::ios_base;
using std::make_unique;
using std::stoi;
using std::string;
using std::unique_ptr;
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
 protected:
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
    static int compare(const string& left, const string& right) {
        int left_sz  = static_cast<int>(left.size());
        int right_sz = static_cast<int>(right.size());
        int idx      = 0;
        while (idx < left_sz && idx < right_sz) {
            if (left[idx] < right[idx]) {
                return -1;
            }
            if (left[idx] > right[idx]) {
                return 1;
            }
            ++idx;
        }
        return left_sz < right_sz ? -1 : 1;
    }

 public:
    virtual int solve(vector<string>& figure_skaters, int N) = 0;

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
        int T = 0;
        int N = 0;
        // Read number of tests
        cin >> T;
        for (int test_no = 1; test_no <= T; ++test_no) {
            // Read input for each test
            cin >> N;
            vector<string> figure_skaters(N, "");
            string         name;
            // Reference:
            // https://www.geeksforgeeks.org/problem-with-getline-after-cin/
            for (int idx = 0; idx < N; ++idx) {
                getline(cin >> ws, name);
                figure_skaters[idx] = name;
            }
            int answer = solve(figure_skaters, N);
            print_answer(test_no, answer);
        }
    }

    static void print_answer(int test_no, int answer) {
        cout << "Case #" << test_no << ": " << answer << "\n";
    }
};

// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Status: Small Accepted. Large Accepted
 * Time complexity:
 * Space complexity:
 * Tags: Insertion sort
 * Categories: Array, String
 * Additional notes
 *  -
 */
// clang-format on
class Solution_01 : public Solution {
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
    int solve(vector<string>& figure_skaters, int N) override {
        int amount = 0;
        if (figure_skaters.empty()) {
            return amount;
        }
        for (int idx = 1; idx < N; ++idx) {
            int  sorted_idx            = idx - 1;
            auto current_figure_skater = figure_skaters[idx];
            while (sorted_idx >= 0) {
                if (compare(figure_skaters[sorted_idx], figure_skaters[idx]) ==
                    -1) {
                    break;
                }
                --sorted_idx;
            }
            if (sorted_idx == idx - 1) {
                continue;
            }
            ++amount;
            for (int s_idx = idx - 1; s_idx > sorted_idx; --s_idx) {
                figure_skaters[s_idx + 1] = figure_skaters[s_idx];
            }
            figure_skaters[sorted_idx + 1] = current_figure_skater;
        }
        return amount;
    }
};

int main(int argc, char* argv[]) {
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
