#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;
        for(int num: nums){
            if(num == candidate1){
                count1++;
            }
            else if(num == candidate2){
                count2++;
            }
            else if(count1 == 0){
                candidate1 = num;
                count1 = 1;
            }
            else if(count2 == 0){
                candidate2 = num;
                count2 = 1;
            }
            else{
                --count1;
                --count2;
            }
        }
        vector<int> result;
        int threshold = nums.size()/3;
        if(count(nums.begin(), nums.end(), candidate1) > threshold){
            result.push_back(candidate1);
        }
        if(candidate1 != candidate2 && count(nums.begin(), nums.end(), candidate2) > threshold){
            result.push_back(candidate2);
        }
        return result;
    }
};
// @lc code=end

