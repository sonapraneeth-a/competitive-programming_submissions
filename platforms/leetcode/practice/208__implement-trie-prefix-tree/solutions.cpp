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
 *        Filename: 208__implement-trie-prefix-tree/solutions.cpp
 *      Created on: 27 August 2021
 *   Last modified: 27 August 2021
 *          Author: sonapraneeth_a
 *     Description: LeetCode submission for 'Implement Trie (Prefix Tree)' problem
 */

/**
 * CHANGELOG
 *
 * Date (DD-MM-YYYY)            Author               Update
 * 27-08-2021               sonapraneeth_a      - Creation of file
 */
// clang-format on

#include <array>
#include <functional>
#include <string>
#include <utility>
#include <vector>

using std::array;
using std::function;
using std::string;
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
class Trie {
 private:
    struct TrieNode {
        vector<TrieNode*> child;
        explicit TrieNode(int char_size = 26) {
            child.resize(char_size, nullptr);
        }
        bool is_end_of_word = false;
        int  count          = 0;
    };
    TrieNode* _root              = nullptr;
    // size of the alphabet
    int                 _char_sz = 0;
    function<int(char)> _char_to_idx_map;

    void clear(TrieNode* _root) {
        for (int idx = 0; idx < _char_sz; ++idx) {
            if (_root->child[idx] != nullptr) {
                clear(_root->child[idx]);
            }
        }
        delete _root;
    }

 public:
    /** Initialize your data structure here. */
    Trie(
        int                 char_size       = 26,
        function<int(char)> char_to_idx_map = [](char c) { return c - 'a'; })
        : _char_sz(char_size),
          _char_to_idx_map(std::move(char_to_idx_map)),
          _root(new TrieNode(char_size)) { }

    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* temp = _root;
        for (char c : word) {
            if (temp->child[_char_to_idx_map(c)] == nullptr) {
                temp->child[_char_to_idx_map(c)] = new TrieNode(_char_sz);
            }
            temp = temp->child[_char_to_idx_map(c)];
        }
        temp->is_end_of_word = true;
        ++temp->count;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* temp = _root;
        for (char c : word) {
            if (temp->child[_char_to_idx_map(c)] == nullptr) {
                return false;
            }
            temp = temp->child[_char_to_idx_map(c)];
        }
        return temp->is_end_of_word;
    }

    bool startsWith(string word) {
        TrieNode* temp = _root;
        for (char c : word) {
            if (temp->child[_char_to_idx_map(c)] == nullptr) {
                return false;
            }
            temp = temp->child[_char_to_idx_map(c)];
        }
        return true;
    }

    ~Trie() { clear(_root); }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
}  // namespace solution_01
