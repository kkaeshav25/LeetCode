#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int currMax = 0;
        int left = 0;
        int right = height.size()-1;
        while(left < right){
            int currArea = min(height[left], height[right]) * (right-left);
            currMax = max(currMax, currArea);
            if(height[left]< height[right])++left;
            else --right;
        }
        return currMax;
    }
};
// @lc code=end

