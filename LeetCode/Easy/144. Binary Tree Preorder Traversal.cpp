class Solution {
    void traverse(vector<int> *sol, TreeNode* root) {
        if(root!=NULL) {
            sol->push_back(root->val);
            traverse(sol, root->left);
            traverse(sol, root->right);
        }
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> sol;
        traverse(&sol, root);
        
        return sol;
    }
};