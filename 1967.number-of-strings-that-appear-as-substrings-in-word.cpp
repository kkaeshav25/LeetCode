#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1967 lang=cpp
 *
 * [1967] Number of Strings That Appear as Substrings in Word
 */

// @lc code=start
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int result = 0;
        for(string s: patterns){
            if(word.find(s)!= string::npos) result++;
        }
        return result;
    }
};
// @lc code=end

