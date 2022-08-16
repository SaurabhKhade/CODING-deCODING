class Solution {
    int node_count = 0;
    
    pair<int,int> getCount(TreeNode* root) {
        if(!root) return {0,0};
        
        if(!root->left && !root->right) {
            node_count++;
            return {root->val, 1};
        } 
        
        auto left = getCount(root->left);
        auto right = getCount(root->right);
        
        pair<int,int> data = {left.first+right.first+root->val,left.second+right.second+1};
        
        if(data.first/data.second == root->val) node_count++;
        
        return data;
    }
public:
    int averageOfSubtree(TreeNode* root) {
        getCount(root);
        return node_count;
    }
};