#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        std::queue<TreeNode*> q;
        vector<vector<TreeNode*>> something;
        vector<int> result;
        if(root == nullptr) return result;
        q.push(root);
        while(!q.empty()){
            vector<TreeNode*> vec;
            int size = q.size();
            for(int i = 0; i < size; ++i){
                TreeNode* aux = q.front();
                vec.push_back(q.front());
                q.pop();
                if(aux->left) q.push(aux->left);
                if(aux->right) q.push(aux->right);
            }
            something.push_back(vec);
        }
        for (auto i:something){
            result.push_back(i.back()->val);
        }
        return result;
        }
};
// @lc code=end

