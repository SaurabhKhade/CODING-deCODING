class Solution {
    void traverse(TreeNode* root, int level, unordered_map<int,int> &map) {
        if(!root) return;
        if(map.find(level)==map.end()) map[level] = root->val;
        else map[level] = max(map[level], root->val);
        traverse(root->left, level+1, map);
        traverse(root->right, level+1, map);
    }
public:
    vector<int> largestValues(TreeNode* root) {
        unordered_map<int,int> map;
        traverse(root, 0, map);
        vector<int> ans(map.size());
        for(auto &el:map){
            ans[el.first] = el.second;
        }
        return ans;
    }
};