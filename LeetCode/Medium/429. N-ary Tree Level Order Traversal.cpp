class Solution {
    void traverse(Node* root, int level, unordered_map<int,vector<int>> &store) {
        if(!root) return;
        store[level].push_back(root->val);
        for(auto &i: root->children) {
            traverse(i, level+1, store);
        }
    }
public:
    vector<vector<int>> levelOrder(Node* root) {
        unordered_map<int,vector<int>> store;
        traverse(root, 0, store);
        vector<vector<int>> traversal(store.size());
        for(auto &i: store) {
            traversal[i.first] = i.second;
        }
        return traversal;
    }
};