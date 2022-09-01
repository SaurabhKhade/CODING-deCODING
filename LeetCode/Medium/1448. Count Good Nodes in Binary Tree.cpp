class Solution {
    int cnt = 0;
    void traverse(TreeNode* root, int max) {
        if(!root) return;
        if(root->val >= max) {
            cnt++;
            max = root->val;
        }
        traverse(root->left, max);
        traverse(root->right, max);
    }
public:
    int goodNodes(TreeNode* root) {
        traverse(root, INT_MIN);
        return cnt;
    }
};