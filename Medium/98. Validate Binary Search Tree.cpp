class Solution {
    void traverse(TreeNode* root, vector<int> &v) {
        if(root->left != NULL) traverse(root->left, v);
        v.push_back(root->val);
        if(root->right != NULL) traverse(root->right, v);
    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        traverse(root,v);
        
        for(int i=1; i<v.size(); i++) {
            if(v[i]<=v[i-1]) return false;
        }
        
        return true;
    }
};