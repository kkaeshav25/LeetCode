#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int num: nums){
            count[num]++;
        }
        using FreqNumPair = pair<int, int>;
        priority_queue<FreqNumPair, vector<FreqNumPair>,greater<FreqNumPair>> minHeap;
        for(const auto& [number, frequency]: count){
            minHeap.push({frequency, number});
            if(minHeap.size() > k) minHeap.pop();
        }
        vector<int>result;
        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;
    }
};
// @lc code=end

