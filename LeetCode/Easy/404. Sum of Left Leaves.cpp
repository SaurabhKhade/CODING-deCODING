class Solution {
    int sum = 0;
    void leftSum(TreeNode* root, bool isLeft) {
        if(!root) return;
        if(isLeft && !root->left && !root->right) sum += root->val; 
        leftSum(root->left, true);
        leftSum(root->right, false);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        leftSum(root,false);
        return sum;
    }
};