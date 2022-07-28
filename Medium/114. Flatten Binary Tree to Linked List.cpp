class Solution {
    void traverse(TreeNode* root, TreeNode* tree) {
        if(tree == NULL) return;
        root->right = new TreeNode(tree->val);
        traverse(root->right, tree->left);
        while(root->right != NULL) root = root->right;
        traverse(root, tree->right);
    }
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        TreeNode *leftTree = root->left, *rightTree = root->right;
        root->left = NULL;
        root->right = NULL;
        traverse(root,leftTree);
        while(root->right != NULL) root = root->right;
        traverse(root, rightTree);
    }
};