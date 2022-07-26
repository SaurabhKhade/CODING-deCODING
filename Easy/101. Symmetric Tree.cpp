class Solution {
    bool traverse(TreeNode *left, TreeNode *right) {
        if(left == NULL && right == NULL) {
            return true;
        }
        if(left == NULL || right == NULL) {
            return false;
        }
        if(left->val != right->val) {
            return false;
        }
        return (traverse(left->left, right->right) & traverse(left->right, right->left));
    }
public:
    bool isSymmetric(TreeNode* root) {
        return traverse(root->left, root->right);
        
    }
};