class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL) return root2;
        if(root2 == NULL) return root1;
        
        TreeNode* left = mergeTrees(root1->left,root2->left);
        TreeNode* right = mergeTrees(root1->right,root2->right);
        
        return new TreeNode(root1->val + root2->val, left, right);
    }
};