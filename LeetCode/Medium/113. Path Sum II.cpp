class Solution {
    void traverse(TreeNode* root, int targetSum, int sum, vector<vector<int>> &paths, vector<int> trace) {
        if(root==NULL) return;
        sum += root->val;
        trace.push_back(root->val);
        if(sum==targetSum && !root->left && !root->right) {
            paths.push_back(trace);
        } else {
            traverse(root->left, targetSum, sum, paths, trace);
            traverse(root->right, targetSum, sum, paths, trace);
        }
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> paths;
        vector<int> trace;
        int sum = 0;
        traverse(root, targetSum, sum, paths, trace);
        return paths;
    }
};