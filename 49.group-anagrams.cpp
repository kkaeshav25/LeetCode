#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    string helper(string &s){
        string hash;
        vector<int> freq(26,0);
        for(char ch:s) freq[ch-'a'] += 1;
        for(int i = 0; i < 26; ++i){
            hash.append(to_string(freq[i]));
            hash.append("$");
        }
        return hash;

    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, int> mp;
        for(int i = 0; i < strs.size(); ++i){
            string key = helper(strs[i]);
            if(mp.find(key) == mp.end()){
                mp[key] = res.size();
                res.push_back({});
            }
            res[mp[key]].push_back(strs[i]);
        }
        return res;
    }   
};
// @lc code=end

