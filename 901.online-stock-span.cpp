#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=901 lang=cpp
 *
 * [901] Online Stock Span
 */

// @lc code=start
class StockSpanner {
    stack<pair<int, int>> myStack;
    int indexTracker = 0;

public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        indexTracker++;
        if(myStack.empty()){
            myStack.push({indexTracker, price});
            return 1;
        }
        while(!myStack.empty()){
            if(myStack.top().second <= price){
                myStack.pop();
                continue;
            }
            else{
                int temp = myStack.top().first;
                myStack.push({indexTracker, price});
                return indexTracker - temp;
            }
        }
        myStack.push({indexTracker, price});
        return indexTracker;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
// @lc code=end

