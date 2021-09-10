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
 *        Filename: PROBLEM_DIRECTORY/submit.cpp
 *      Created on: EXPANDED_DATE
 *   Last modified: EXPANDED_DATE
 *          Author: AUTHOR_ALIAS
 *     Description: Google/KickStart submission for 'PROBLEM_TITLE' problem
 * Compile command: g++ submit.cpp -std=c++17 -pthread -O2 -o submit
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * SHORT_DATE               AUTHOR_ALIAS      - Creation of file
 */
// clang-format on

#include <iostream>
#include <memory>
#include <string>

using std::cin;
using std::cout;
using std::ios_base;
using std::make_unique;
using std::stoi;
using std::unique_ptr;

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
    virtual int solve() = 0;

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
        // Read number of tests
        cin >> T;
        for (int test_no = 1; test_no <= T; ++test_no) {
            // TODO(AUTHOR_ALIAS): Read input for each test
            // TODO(AUTHOR_ALIAS): Solve the problem and print output
            int answer = solve();
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
 * Status: Small . Large
 * Time complexity:
 * Space complexity:
 * Tags:
 * Categories:
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
    int solve() override { return 0; }
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
