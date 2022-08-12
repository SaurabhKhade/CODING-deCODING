class Solution {
    unsigned sum = 0, max_depth = 0; 
    
    void calculate(TreeNode* root, int current_depth) {
        if(current_depth == max_depth) {
            sum += root->val;
        } else if(current_depth > max_depth) {
            max_depth = current_depth;
            sum = root->val;
        }
        
        if(root->left != NULL) calculate(root->left, current_depth+1);
        if(root->right != NULL) calculate(root->right, current_depth+1);
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        calculate(root, 0);
        return sum;
    }
};