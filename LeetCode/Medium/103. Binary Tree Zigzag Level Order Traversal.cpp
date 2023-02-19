class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        unordered_map<int, vector<int>> map;
        helper(root,map,0);
        vector<vector<int>> output(map.size());
        for(auto &[level,v]:map) {
            if(level%2==0) {
                output[level] = v;
            } else {
                reverse(v.begin(), v.end());
                output[level] = v;
            }
        }
        return output;
    }
    void helper(TreeNode* root,unordered_map<int, vector<int>> &map, int level) {
        if(root==NULL) return;
        helper(root->left, map, level+1);
        map[level].push_back(root->val);
        helper(root->right, map, level+1);
    }
};