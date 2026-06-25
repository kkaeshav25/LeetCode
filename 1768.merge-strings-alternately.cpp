#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string result;
        for(int i = 0; i < word1.length() ||i < word2.length(); ++i){
            if(i < word1.length()) result += word1[i];
            if(i < word2.length()) result += word2[i];
        }
        return result;
    }
};
// @lc code=end

