#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> rows (9, vector<bool>(9, false));
        vector<vector<bool>> cols (9, vector<bool>(9, false));
        vector<vector<bool>> sub (9, vector<bool>(9, false));

        for(int row = 0; row < 9; ++row){
            for(int col = 0; col < 9; ++col){
                char currCell = board[row][col];
                if(currCell == '.') continue;
                int digitIdx = currCell - '0' - 1;
                int subBoxIdx = (row/3)*3 + (col/3);
                if(rows[row][digitIdx] || cols[col][digitIdx] || sub[subBoxIdx][digitIdx]){
                    return false;
                }
                rows[row][digitIdx] = true;
                cols[col][digitIdx] = true;
                sub[subBoxIdx][digitIdx] = true;
            }
        }
        return true;
    }
};
// @lc code=end

