class Solution {
    TreeNode* tree(vector<int>& nums, int low, int high) {
        if(low>high) return NULL;
        int mid = (low+high)/2;
        return new TreeNode(nums[mid], tree(nums,low,mid-1), tree(nums,mid+1,high));
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return tree(nums,0,nums.size()-1);
    }
};