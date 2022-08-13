class Solution {
    void traverse(TreeNode* root, vector<int> &trace)  {
        if(root == NULL) return;
        traverse(root->left, trace);
        traverse(root->right, trace);
        trace.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> trace;
        traverse(root, trace);
        return trace;
    }
};