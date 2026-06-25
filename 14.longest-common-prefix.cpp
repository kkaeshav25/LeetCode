#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp = "";
        int minLength = strs[0].length();
        for(string s : strs){
            minLength = min(minLength, (int)s.size());
        }
        for(int i = 0; i < minLength; ++i){
            char ch = strs[0][i];
            for(string &str:strs){
                if(str[i]!= ch) return lcp;
            }
            lcp.push_back(ch);
        }
        return lcp;
    }
};
// @lc code=end

