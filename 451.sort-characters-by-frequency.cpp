#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> count;
        for(char c: s){
            count[c]++;
        }
        using FreqCharPair = pair<int, char>;
        auto comp = [](const FreqCharPair& left, const FreqCharPair& right){
            if(left.first == right.first){
                return left.second > right.second;
            }
            return left.first < right.first; 
        };
        priority_queue<FreqCharPair, vector<FreqCharPair>, decltype(comp)> maxHeap;
        for(const auto &[character, freq] :count){
            maxHeap.push({freq, character});
        }
        string result;
        while(!maxHeap.empty()){
            for(int i = 0; i < maxHeap.top().first; ++i){
                result.push_back(maxHeap.top().second);
            }
            maxHeap.pop();
        }
        return result;
    }
};
// @lc code=end

