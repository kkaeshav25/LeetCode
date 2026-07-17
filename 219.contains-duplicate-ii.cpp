#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> numToIndex;
        for(int i = 0; i < nums.size(); ++i){
            if(numToIndex.count(nums[i]) && (i - numToIndex[nums[i]])<= k){
                return true;
            }
            numToIndex[nums[i]] = i;
        }
        return false;
    }
};
// @lc code=end

