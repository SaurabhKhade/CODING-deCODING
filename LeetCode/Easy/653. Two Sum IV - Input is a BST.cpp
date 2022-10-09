class Solution {
    void traverse(TreeNode* root, vector<int> &v) {
        if(!root) return;
        traverse(root->left, v);
        v.push_back(root->val);
        traverse(root->right, v);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        traverse(root, v);
        int i=0, j=v.size()-1;
        while(i<j) {
            if(v[i]+v[j] == k) return true;
            else if(v[i]+v[j] < k) i++;
            else j--;
        }
        return false;
    }
};