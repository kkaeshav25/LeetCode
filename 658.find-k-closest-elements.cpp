#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=658 lang=cpp
 *
 * [658] Find K Closest Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int windowStart = 0;
        int windowEnd = arr.size() - k;
        //Binary search to find optimal starting point for a window of size k
        while(windowStart < windowEnd){
            int mid = windowStart + (windowEnd-windowStart)/2;
            //Checking if that midpoint is a valid starting point to be "closest" to x
            if(x - arr[mid] > arr[mid + k] - x){
                windowStart = mid + 1;
            }
            else{
                windowEnd = mid;
            }
        }
        return vector<int> (arr.begin() + windowStart, arr.begin() + windowStart + k);
    }
};
// @lc code=end

