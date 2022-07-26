class Solution {
    TreeNode* makeTree(vector<int>& nums, int low, int high) {
        if(low>high) {
            return NULL;
        } else if(low == high) {
            return new TreeNode(nums[low]);   
        } else {
            int mid = (low+high)/2;
            TreeNode *left = makeTree(nums, low, mid-1);
            TreeNode *right = makeTree(nums, mid+1,high);
            return new TreeNode(nums[mid], left, right);
        }
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makeTree(nums, 0, nums.size()-1);
    }
};