class Solution {
    void update(TreeNode* root, int val, int depth, int curDepth) {
        if(!root) return;
        if(curDepth == depth-1) {
            TreeNode *nodeL = new TreeNode(val);
            TreeNode *nodeR = new TreeNode(val);
            nodeL->left = root->left;
            nodeR->right = root->right;
            root->left = nodeL;
            root->right = nodeR;
        } else {
            update(root->left,val,depth,curDepth+1);
            update(root->right,val,depth,curDepth+1);
        }
    }
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1) {
            TreeNode *node = new TreeNode(val);
            node->left = root;
            return node;
        }
        update(root,val,depth,1);
        return root;
    }
};