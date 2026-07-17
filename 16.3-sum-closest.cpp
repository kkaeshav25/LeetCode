#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest_sum = 999999;
        for(int i = 0; i < nums.size() - 2; ++i){
            int right = nums.size() - 1;
            int left =  i + 1;
            while(left < right){
                if(abs(nums[left] + nums[i] + nums[right] - target) < abs(closest_sum - target)){
                    closest_sum = nums[left] + nums[right] + nums[i];
                    if(closest_sum == target) return closest_sum;
                }
                if(nums[left] + nums[right] + nums[i] < target) left++;
                else{
                    right--;
                }
            }
        }
        return closest_sum;
    }
};
// @lc code=end

