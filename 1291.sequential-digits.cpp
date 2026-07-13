#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1291 lang=cpp
 *
 * [1291] Sequential Digits
 */

// @lc code=start
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        for(int i = 1; i < 9; ++i){
            int curr = i;
            for(int next = i + 1; next < 10; ++next){
                curr = curr * 10 + next;
                if(curr >= low &&  curr <= high){
                    result.push_back(curr);
                }
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};
// @lc code=end

