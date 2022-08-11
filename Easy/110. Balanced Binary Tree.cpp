class Solution {
    int height(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        
        int left_height = height(root->left);
        int right_height = height(root->right);
        
        if(left_height==-1 || right_height==-1 || abs(left_height-right_height)>1)
            return -1;
        else 
            return( left_height>right_height)?left_height+1:right_height+1;
    }
    
public:
    bool isBalanced(TreeNode* root) {
        return height(root)==-1?false:true;
    }
};