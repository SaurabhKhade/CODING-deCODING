class Solution {
    int depth_calc(TreeNode *root) {
        if(root == NULL) return -1;
        
        int left_height = depth_calc(root->left);
        int right_height = depth_calc(root->right);
        
        if(left_height==-1 && right_height==-1) return 1;
        else if(left_height==-1) return right_height+1;
        else if(right_height==-1) return left_height+1;
        else return left_height<right_height?left_height+1:right_height+1;
    }
public:
    int minDepth(TreeNode* root) {
        return root==NULL?0:depth_calc(root);
    }
};