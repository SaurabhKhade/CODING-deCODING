class Solution {
    bool checkPathSum(TreeNode* root, int targetSum, int currSum) {
        if(root == NULL) return false;
        else if(root->left == NULL && root->right == NULL) {
            currSum += root->val;
            if(currSum == targetSum) return true;
            return false;
        } else {
            bool leftCheck = checkPathSum(root->left, targetSum, currSum+root->val);
            bool rightCheck = checkPathSum(root->right, targetSum, currSum+root->val);
            return leftCheck | rightCheck;
        }
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return checkPathSum(root, targetSum, 0);
    }
};