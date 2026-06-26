#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*
        Hashing solution
        set<int> mySet(nums.begin(), nums.end());
        nums.clear();
        for(auto i: mySet){
            nums.push_back(i);
        }
        return mySet.size();
        */
        int idxToWrite = 0;
        for(int currNum :nums){
            if(idxToWrite == 0 || currNum != nums[idxToWrite - 1]){
                nums[idxToWrite++] = currNum;
            }
        }
        return idxToWrite;
    }
};
// @lc code=end

