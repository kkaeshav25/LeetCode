#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_price = prices[0];
        for (int i = 0; i < prices.size(); ++i){
            int curr_profit = (prices[i] - min_price);
            max_profit = std::max(max_profit, curr_profit);
            min_price = std::min(min_price, prices[i]);
        }
        return max_profit;
    }
};
// @lc code=end

