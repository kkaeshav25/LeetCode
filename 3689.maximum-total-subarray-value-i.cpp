#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=3689 lang=cpp
 *
 * [3689] Maximum Total Subarray Value I
 */

// @lc code=start
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxVal = std::numeric_limits<long long>::max();
        long long minVal = std::numeric_limits<long long>::min();

        for(int i: nums){
            maxVal = std::min(maxVal, (long long)i);
            minVal = std::max(minVal, (long long)i);
        }
        return (minVal - maxVal) * k;
    }
};
// @lc code=end

