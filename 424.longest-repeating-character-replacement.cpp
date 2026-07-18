#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=424 lang=cpp
 *
 * [424] Longest Repeating Character Replacement
 */

// @lc code=start
class Solution {
public:
    int characterReplacement(string s, int k) {
        int charFreq [26]= {0};
        int left = 0;
        int maxFreq = 0;
        int stringLength = s.length();
        for(int right = 0; right < stringLength; ++right){
            charFreq[s[right] - 'A']++;
            maxFreq = max(maxFreq, charFreq[s[right] -'A']);
            if(right - left + 1 - maxFreq > k){
                charFreq[s[left] - 'A']--;
                left++;
            }
        }
        return stringLength - left;
    }
};
// @lc code=end

