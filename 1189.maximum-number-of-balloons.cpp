#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1189 lang=cpp
 *
 * [1189] Maximum Number of Balloons
 */

// @lc code=start
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> letter_count (26,0);
        for(char c: text){
            letter_count [c - 'a']++;
        }
        letter_count['o' - 'a']>>=1;
        letter_count['l' - 'a']>>=1;
        int maxBall = std::numeric_limits<int>::max();
        string balloonLet = "balon";
        for(char c: balloonLet){
            maxBall = min(maxBall, letter_count[c-'a']);
        }
        return maxBall;
    }
};
// @lc code=end

