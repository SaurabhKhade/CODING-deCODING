class Solution {
    int fillArray(TreeNode* root, TreeNode* target, vector<TreeNode*> &fill) {
        if(root == NULL) {
            return 0;
        } else if(root->val == target->val) {
            fill.push_back(root);
            return 1;
        } else {
            int left = fillArray(root->left, target, fill);
            int right = fillArray(root->right, target, fill);
            if(left | right) fill.push_back(root);
            return left|right;
        }
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pFill, qFill;
        fillArray(root, p, pFill);
        fillArray(root, q, qFill);
        
        int pIndex = pFill.size()-1, qIndex = qFill.size()-1;
        TreeNode* lowest;
        
        while(pIndex>=0 && qIndex>=0 && pFill[pIndex] == qFill[qIndex]) {
            lowest = pFill[pIndex];
            pIndex--;
            qIndex--;
        }
        
        return lowest;
    }
};