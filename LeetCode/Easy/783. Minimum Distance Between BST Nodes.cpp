class Solution {
public:
    int minDiffInBST(TreeNode* root) {
        vector<int> nums;
        traverse(root,nums);

        int ans = INT_MAX;
        for(int i=1; i<nums.size(); i++) ans = min(ans, nums[i]-nums[i-1]);
        return ans;
    }
    void traverse(TreeNode* root, vector<int> &nums) {
        if(!root) return;
        traverse(root->left, nums);
        nums.push_back(root->val);
        traverse(root->right, nums);
    }
};