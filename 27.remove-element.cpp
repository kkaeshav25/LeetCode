#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto new_end = std::remove(nums.begin(), nums.end(), val);
        int ans = 0;
        std::ranges::subrange w(nums.begin(), new_end);
        for(auto i: w) ans++;
        return ans;
    }
};
// @lc code=end

