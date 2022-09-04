class Solution {
    void traverse(TreeNode* root, map<int, map<int,vector<int>>> &store, int v, int h) {
        if(!root) return;
        store[h][v].push_back(root->val);
        traverse(root->left, store, v+1, h-1);
        traverse(root->right, store, v+1, h+1);
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> pos;
        map<int, map<int,vector<int>>> store;
        traverse(root, store, 0, 0);
        for(auto &i:store) {
            vector<int> level;
            for(auto &j:i.second) {
                sort(j.second.begin(), j.second.end());
                for(auto &k: j.second){
                    level.push_back(k);
                }
            }
            pos.push_back(level);
        }
        return pos;
    }
};