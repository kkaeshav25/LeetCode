#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        auto fastPower = [](double base, long long exponent){
            double result = 1.0;
            while(exponent > 0){
                if(exponent &1){
                    result *= base;
                }
                base *= base;
                exponent >>= 1;
            }
            return result;
        };
        return n>=0 ? fastPower(x, n) : 1.0 / fastPower(x, -(long long)n);
    }
};
// @lc code=end

