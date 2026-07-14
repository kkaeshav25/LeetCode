#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=881 lang=cpp
 *
 * [881] Boats to Save People
 */

// @lc code=start
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int tot, i = 0;
        int j = people.size()-1;
        while(i <= j){
            if(people[i] + people[j] <= limit){
                i++;
            }
            j--;
            tot++;
        }
        return tot;
    }
};
// @lc code=end

