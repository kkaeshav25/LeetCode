#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>result(n);
        int lp = 1;
        for(int i = 0; i < n; ++i){
            result[i] = lp;
            lp *= nums[i];
        }
        int rp = 1;
        for(int i = n-1; i >= 0; --i){
            result[i] *= rp;
            rp *= nums[i];
        }
        return result;
    }
};
// @lc code=end

