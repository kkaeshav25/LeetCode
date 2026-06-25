#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1929 lang=cpp
 *
 * [1929] Concatenation of Array
 */

// @lc code=start
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> aux = nums;
        for(int i : nums){
            aux.push_back(i);
        }
        return aux;
    }
};
// @lc code=end

