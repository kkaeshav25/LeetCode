#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

// @lc code=start
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> memo (amount+1, amount + 1);
        memo[0] = 0;
        for(int i = 1; i < amount + 1; ++i){
            for(int coin : coins){
                if(i - coin >= 0){
                    memo[i] = min(memo[i], memo[i - coin] + 1);
                }
            }
        }
        if(memo[amount] == amount+1) return -1;
        return memo[amount];
    }
};
// @lc code=end

