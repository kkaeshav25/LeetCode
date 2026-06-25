#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=3612 lang=cpp
 *
 * [3612] Process String with Special Operations I
 */

// @lc code=start
class Solution {
public:
    string processStr(string s) {
        std::string result = "";
        for(char c: s){
            if(c == '*'){
                if(!result.empty()){
                    result.pop_back();
                }
            }
            else if(c == '#'){
                std::string aux = result;
                result += aux;
            }
            else if(c == '%'){
                std::reverse(result.begin(), result.end());
            }
            else{
                result += c;
            }
        }
        return result;
    }
};
// @lc code=end

