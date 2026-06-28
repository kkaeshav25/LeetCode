#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=380 lang=cpp
 *
 * [380] Insert Delete GetRandom O(1)
 */

// @lc code=start
class RandomizedSet {
    //Hashset
    vector<int> track;
    unordered_map<int, int> my_map;
    int idx;
public:
    RandomizedSet() {
        idx = 0;
    }
    
    bool insert(int val) {
        bool exists = my_map.count(val);
        if(!exists){
            track.push_back(val);
            my_map[val] = idx;
            idx++;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        bool exists = my_map.count(val);
        if(!exists){
            return false;
        }
        int removableIdx = my_map[val];
        my_map[track[track.size()-1]] = removableIdx;
        swap(track[track.size()-1], track[my_map[val]]);
        track.pop_back();
        idx--;
        my_map.erase(val);
        return true;
    }
    
    int getRandom() {
        int idx = rand() % (track.size());
        return track[idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
// @lc code=end

