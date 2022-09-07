class Solution {
    void traverse(TreeNode* root, string &str) {
        if(!root) return;
        str += to_string(root->val);
        bool flag = true;
        if(root->left) {
            flag = false;
            str += "(";
            traverse(root->left, str);
            str += ")";
        }
        if(root->right) {
            if(flag) str+="()";
            str += "(";
            traverse(root->right, str);
            str += ")";
        }
    }
public:
    string tree2str(TreeNode* root) {
        string str;
        traverse(root, str);
        return str;
    }
};