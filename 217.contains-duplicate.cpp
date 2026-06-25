#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int i : nums){
            if(set.contains(i)) return true;
            else set.insert(i);
        }
        return false;
    }
};
// @lc code=end

