#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=304 lang=cpp
 *
 * [304] Range Sum Query 2D - Immutable
 */

// @lc code=start
class NumMatrix {
    vector<vector<int>> prefixSum;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        prefixSum.resize(rows + 1, vector<int>(cols+1,0));
        for(int i = 0; i < rows; ++i){
            for(int j = 0; j < cols; ++j){
                prefixSum[i+1][j+1] = prefixSum[i+1][j]+
                                      prefixSum[i][j+1]-
                                      prefixSum[i][j]+
                                      matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefixSum[row2+1][col2+1] - prefixSum[row2+1][col1] - prefixSum[row1][col2+1] + prefixSum[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
// @lc code=end

