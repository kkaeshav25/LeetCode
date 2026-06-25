#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int totSubbarrays = 0;
        unordered_map<int, int> prefixSumCount{{0,1}};
        int runningTot = 0;
        for(int n: nums){
            runningTot+=n;
            totSubbarrays += prefixSumCount[runningTot - k];
            ++prefixSumCount[runningTot];
        }
        return totSubbarrays;
    }
};
// @lc code=end

