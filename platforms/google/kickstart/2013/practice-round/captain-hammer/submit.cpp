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
 *        Filename: captain-hammer/submit.cpp
 *      Created on: 07 September 2021
 *   Last modified: 07 September 2021
 *          Author: sonapraneeth_a
 *     Description: Google/KickStart submission for 'Captain Hammer' problem
 * Compile command: g++ submit.cpp -std=c++17 -pthread -O2 -o submit
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 07-09-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <cerrno>
#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
#include <memory>
#include <string>

using std::asin;
using std::cin;
using std::cout;
using std::fixed;
using std::ios_base;
using std::make_unique;
using std::setprecision;
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
    virtual double solve(int V, int D) = 0;

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
        int T = 0, V = 0, D = 0;
        // Read number of tests
        cin >> T;
        for (int test_no = 1; test_no <= T; ++test_no) {
            cin >> V >> D;
            double answer = solve(V, D);
            print_answer(test_no, answer);
        }
    }

    static void print_answer(int test_no, double answer) {
        cout << fixed << setprecision(7);
        cout << "Case #" << test_no << ": " << answer << "\n";
    }
};

// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Status: Small WA. Large WA
 * Time complexity:
 * Space complexity:
 * Tags: Float answer, Physics, Nan
 * Categories:
 * Additional notes
 *  -
 */
// clang-format on
class Solution_01 : public Solution {
 private:
    // Normalizes any number to an arbitrary range
    // by assuming the range wraps around when going below min or above max
    double normalize(const double value, const double start, const double end) {
        const double width       = end - start;    //
        const double offsetValue = value - start;  // value relative to 0
        return (offsetValue - (floor(offsetValue / width) * width)) + start;
        // + start to reset back to start of original range
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
    double solve(int V, int D) override {
        // Reference: https://byjus.com/physics/projectile-motion/
        // Formula: D = (V^2 * sin(2\theta) ) / g
        // Therefore \theta = 0.5 * sin^{-1}((D * g) / V^2)
        double g  = 9.8;
        errno     = 0;
        auto   dD = static_cast<double>(D), dV = static_cast<double>(V);
        double theta_radians = 0.5 * asin((dD * g) / (dV * dV));
        double theta_degrees = theta_radians * 57.295779513;
        if (errno == EDOM) {
            return 45.000;
        }
        return theta_degrees;
    }
};

// clang-format off
/**
 * CLASS DESCRIPTION
 *
 * Status: Small Accepted. Large Accepted
 * Time complexity:
 * Space complexity:
 * Tags: Float answer, Physics
 * Categories:
 * Additional notes
 *  -
 */
// clang-format on
class Solution_02 : public Solution {
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
    double solve(int V, int D) override {
        // Reference: https://byjus.com/physics/projectile-motion/
        // Formula: D = (V^2 * sin(2\theta) ) / g
        // Therefore \theta = 0.5 * sin^{-1}((D * g) / V^2)
        double g = 9.8;
        errno    = 0;
        auto dD = static_cast<double>(D), dV = static_cast<double>(V);
        // Check if the value passed to asin > 1 using
        // cout << fixed << setprecision(20);
        // Example: https://www.ideone.com/dXyYyO
        double theta_radians = 0.5 * asin((dD * g) / (dV * dV));
        double theta_degrees = theta_radians * 57.295779513;
        if (errno == EDOM) {
            return 45.000;
        }
        return theta_degrees;
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
