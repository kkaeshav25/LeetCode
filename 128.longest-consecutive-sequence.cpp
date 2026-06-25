#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLen = 0;
        unordered_map<int, int> sequenceLen;
        for(int currNum: nums){
            int nextNum = currNum;
            while(numSet.count(nextNum)){
                numSet.erase(nextNum);
                nextNum++;
            }
            int currSeqLen = (nextNum- currNum);
            if(sequenceLen.count(nextNum)){
                currSeqLen += sequenceLen[nextNum];
            }
            sequenceLen[currNum] = currSeqLen;
            maxLen = max(maxLen, sequenceLen[currNum]);
        }
        return maxLen;
    }
};
// @lc code=end

