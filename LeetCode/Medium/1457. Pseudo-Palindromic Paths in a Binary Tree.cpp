class Solution {
    int count = 0;
    void check(TreeNode* root, vector<int> arr, int sum) {
        if(root==NULL) return;
        
        if(arr[root->val]) {
            arr[root->val] = 0;
            sum--;
        }
        else {
            arr[root->val] = 1;
            sum++;
        }
        
        if(root->left==NULL && root->right==NULL) {
            if(sum==0 || sum==1) count++;
        } else {
            check(root->left, arr, sum);
            check(root->right, arr, sum);
        }
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> arr(10);
        int sum = 0;
        check(root, arr, sum);
        return count;
    }
};