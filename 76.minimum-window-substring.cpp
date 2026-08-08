#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> needT;
        unordered_map<char, int> window;
        for(char c: t){
            needT[c]++;
        }
        int count = 0;
        int left = 0;
        int minStart = -1;
        int minLen = s.length() + 1;
        for(int right = 0; right < s.length(); ++right){
            char rightChar = s[right];
            window[rightChar]++;
            if(window[rightChar] <= needT[rightChar]){
                count++;
            }
            while(count == t.length()){
                if(right - left + 1 < minLen){
                    minLen= right - left + 1;
                    minStart = left;
                }
                char leftChar = s[left];
                if(window[leftChar]<=needT[leftChar]){
                    count--;
                }
                window[leftChar]--;
                left++;
            }
        }
        if(minStart == -1) return "";
        return s.substr(minStart, minLen);
    }
};
// @lc code=end

