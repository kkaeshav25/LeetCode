//DaSeef
//Binary Tree, looking at the binary tree from right side and run BFS
//TIP: When using a queue, always use a deque --> ease of movement
vector<TreeNode> answer(TreeNode * root){
    std::queue<TreeNode*> q;
    vector<vector<TreeNode*>> something;
    vector<TreeNode> result;
    q.push(root);
    while(!q.empty()){
        vector<TreeNode*> vec;
        int size = q.size();
        for(int i = 0; i < size; ++i){
            TreeNode *aux = q.front();
            vec.push_back(q.front());
            q.pop();
            q.push(aux->left);
            q.push(aux-right);
        }
        something.push_back(vec);
    }
    for (auto i:something){
        result.push_back(i.back());
    }
    return result;
}