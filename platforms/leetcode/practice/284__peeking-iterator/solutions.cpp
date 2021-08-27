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
 *        Filename: 284__peeking-iterator/solutions.cpp
 *      Created on: 27 August 2021
 *   Last modified: 27 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Peeking Iterator' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 27-08-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

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
/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    
	}
	
	bool hasNext() const {
	    
	}
};
}  // namespace solution_01
