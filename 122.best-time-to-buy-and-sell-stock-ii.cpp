#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        for(int i = 1; i < prices.size(); ++i){
            maxProfit += max(0, prices[i] - prices[i-1]);
        }
        return maxProfit;
    }
};
// @lc code=end

