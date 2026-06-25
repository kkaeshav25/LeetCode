#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=2287 lang=cpp
 *
 * [2287] Rearrange Characters to Make Target String
 */

// @lc code=start
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> letter_count (26,0);
        for(char c: s){
            letter_count [c - 'a']++;
        }
        vector<int> idCount(26,0);
        for(char c: target){
            idCount[c-'a']++;
        }
        int maxBall = std::numeric_limits<int>::max();
        for(char c: target){
            maxBall = min(maxBall, letter_count[c-'a']/idCount[c-'a']);
        }
        return maxBall;
    }
};
// @lc code=end

