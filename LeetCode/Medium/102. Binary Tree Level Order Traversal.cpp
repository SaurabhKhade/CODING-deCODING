class Solution {
    void traverse(TreeNode* root, int level, unordered_map<int,vector<int>> &store) {
        if(!root) return;
        store[level].push_back(root->val);
        traverse(root->left, level+1, store);
        traverse(root->right, level+1, store);
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        unordered_map<int,vector<int>> store;
        traverse(root, 0, store);
        vector<vector<int>> traversal(store.size());
        for(auto &i: store)  traversal[i.first] = i.second;
        return traversal;
    }
};