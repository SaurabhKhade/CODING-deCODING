class Solution {
    void traverse(TreeNode* root, vector<string> &paths, string path="") {
        if(!root) return;
        path += to_string(root->val);
        if(!root->left && !root->right) {
            paths.push_back(path);
            return;
        }
        if(root->left) traverse(root->left, paths, path+"->");
        if(root->right) traverse(root->right, paths, path+"->");
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        traverse(root, paths);
        return paths;
    }
};