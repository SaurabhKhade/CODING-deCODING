class Solution {
    map<int,vector<int>> levels;
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        helper(root,0);
        for(auto itr = levels.rbegin(); itr != levels.rend(); itr++) {
          ans.push_back(itr->second);
        }
        return ans;
    }

    void helper(TreeNode* root, int level) {
      if(root==NULL) return;
      levels[level].push_back(root->val);
      helper(root->left, level+1);
      helper(root->right, level+1);
    }
};