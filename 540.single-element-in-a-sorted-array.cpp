#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=540 lang=cpp
 *
 * [540] Single Element in a Sorted Array
 */

// @lc code=start
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() -1;
        int ans = -1;
        if(nums.size() == 1) return nums[0];
        while(left <= right){
            int mid = left + (right-left)/2;
            if(nums[mid]!= nums[mid^1]){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid + 1;
            }
        }
        return nums[ans];       
    }
    
};
// @lc code=end

