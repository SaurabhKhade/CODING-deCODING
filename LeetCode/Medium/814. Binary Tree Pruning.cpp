class Solution {
    bool prune(TreeNode* root) {
        if(!root) return false;
        bool left = prune(root->left);
        if(!left) root->left = NULL;
        bool right = prune(root->right);
        if(!right) root->right = NULL;
        return left || right || root->val == 1;
    }
public:
    TreeNode* pruneTree(TreeNode* root) {
        bool rootStatus = prune(root);
        if(!rootStatus) return NULL;
        return root;
    }
};