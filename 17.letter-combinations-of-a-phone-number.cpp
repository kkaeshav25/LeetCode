#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
/*
vector<string> result = {""};
vector{
abc
def
ghi
jkl
mno
pqrs
tuv
wxyz
}

for char: digit{
letters = vector[char - '2'];
vector<string> newComb
for(string: in result){
for(letter in letters){
    newComb.push_back(string + letter)//ad, ae, af, bd, be, bf, cd, ce, cf
}
}
}
result = newComb; // a, b, c


*/
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result = {""};
        vector<string> diddy = {
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };
        for(char d: digits){
            string letters = diddy[d - '2'];
            vector<string> newComb;
            for(const string & s: result){
                for(char l: letters){
                    newComb.push_back(s + l);
                }
            }
            result = move(newComb);
        }
        return result;
    }
};
// @lc code=end

