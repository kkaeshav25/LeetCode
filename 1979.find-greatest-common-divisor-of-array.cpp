#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1979 lang=cpp
 *
 * [1979] Find Greatest Common Divisor of Array
 */

// @lc code=start
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return gcd(nums[0], nums[nums.size()-1]);
        //Could also do a while loop using Extended Euclidean Algorithm to find gcd
        /*
        int a = nums[0];
        int b = nums[nums.size()-1];
        while(b != 0){
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
         */
    }
};
// @lc code=end

