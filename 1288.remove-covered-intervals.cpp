#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1288 lang=cpp
 *
 * [1288] Remove Covered Intervals
 */

// @lc code=start
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
            if (a[0] == b[0]) {
                return a[1] > b[1]; 
            }
            return a[0] < b[0];
        });
        int nonCoveredCount = 0;
        int prevEnd = INT_MIN;
        for(const auto & interval: intervals){
            int currEnd = interval[1];
            if(currEnd > prevEnd){
                nonCoveredCount++;
                prevEnd = currEnd;
            }
        }
        return nonCoveredCount;
    }
};
// @lc code=end

