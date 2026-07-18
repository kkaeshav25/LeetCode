#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution {
    /*
    Set up windows of size s1.size();
    */
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> cnt;
        for(char c: s1){
            cnt[c]++;
        }
        int m = s1.size();
        int need = cnt.size();
        for(int i = 0; i < s2.size(); ++i){
            cnt[s2[i]]--;
            if(cnt[s2[i]] == 0){
                need--;
            }
            if(i >= m){
                int leftChar = s2[i - m];
                if(++cnt[leftChar] == 1){
                    need++;
                }
            }
            if(need == 0){
                return true;
            }
        }
        return false;  
    }
};
// @lc code=end

