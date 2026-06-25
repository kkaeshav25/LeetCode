#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = -1;
        int right = nums.size();
        int curr = 0;
        while(curr < right){
            if(nums[curr] == 0){
                left ++;
                swap(nums[left], nums[curr]);
                curr++;
            }
            else if(nums[curr] == 2){
                right--;
                swap(nums[right], nums[curr]);
            }
            else curr++;
        }

    }
};
// @lc code=end

