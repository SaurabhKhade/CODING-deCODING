class Solution {
public:
    int maxDepth(TreeNode* root, int depth=0) {
        if(root==NULL) return depth;
        depth++;
        return max(maxDepth(root->left,depth),maxDepth(root->right, depth));
    }
};