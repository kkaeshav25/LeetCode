#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
        while(left < right){
            if(s[left] != s[right]){
                return isPal(left+1, right, s) || isPal(left, right-1, s);
            }
            left++;
            right--;
        }
        return true;
    }
    bool isPal(int left, int right, string &s){
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
// @lc code=end

