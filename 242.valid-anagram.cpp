#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map;
        for(char c: s){
            map[c]++;
        }
        for(char c: t){
            map[c]--;
        }
        for(auto it:map){
            if(it.second != 0) return false;
        }
        return true;
    }
};
// @lc code=end

