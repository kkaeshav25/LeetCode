#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=3614 lang=cpp
 *
 * [3614] Process String with Special Operations II
 */

// @lc code=start
class Solution {
public:
char processStr(std::string s, long long k) {
    int n = s.size(); 
    std::vector<long long> lengths(n);
    long long current_len = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '*') {
            if (current_len > 0) current_len--;
        }
        else if (s[i] == '#') {
            if (current_len > k) current_len = k + 1;
            else current_len *= 2;
        }
        else if (s[i] == '%') {
        }
        else {
            current_len++;
        }
        lengths[i] = current_len;
    }
    if (k >= current_len || k < 0) return '.';
    long long len = current_len;
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == '*') {
            long long prev_len = (i == 0) ? 0 : lengths[i - 1];
            if (prev_len > 0) {
                len++;
            }
        }
        else if (s[i] == '#') {
            len /= 2;
            if (k >= len) {
                k -= len; 
            }
        }
        else if (s[i] == '%') {
            if (len > 0) {
                k = len - 1 - k;
            }
        }
        else {
            if (k == len - 1) {
                return s[i]; 
            }
            len--;
        }
    }
    
    return '.';
}
};
// @lc code=end

