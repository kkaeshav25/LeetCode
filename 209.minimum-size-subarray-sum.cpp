#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        vector<long long> prefixSum(n+1);
        for(int i = 0; i < n; ++i){
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }
        int minLen = n + 1;
        for(int i = 0; i <= n; ++i){
            int left = i;
            int right = n;
            int firstTrueIdx = -1;
            while(left <= right){
                int mid = left + (right - left)/2;
                if(prefixSum[mid] >= prefixSum[i] + target){
                    firstTrueIdx = mid;
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                } 
            }
            if(firstTrueIdx != -1){
                minLen = min(minLen, firstTrueIdx - i);
            }
        }
        return minLen <= n ? minLen : 0;
    }
};
// @lc code=end

