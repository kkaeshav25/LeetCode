#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=912 lang=cpp
 *
 * [912] Sort an Array
 */

// @lc code=start
class Solution {
public:
    void quickSort(int left, int right, vector<int>& nums){
        if(left >= right){
            return;
        }
        int i = left - 1;
        int j = right + 1;
        int pivot = nums[(left + right)>>1];
        while(i < j){
            while(nums[++i] < pivot) continue;
            while(nums[--j] > pivot) continue;
            if(i < j) swap (nums[i], nums[j]);
        }
        quickSort(left, j, nums);
        quickSort(j+1, right, nums);

    }    
    vector<int> sortArray(vector<int>& nums) {
        quickSort(0, nums.size()-1, nums);
        return nums;
    }
};
// @lc code=end

