class Solution {
    void recurse(vector<vector<int>>&ans, vector<int>& nums, vector<int> currArr, int cur, int n) {
        if(cur==n) {
            ans.push_back(currArr);
            return;
        }
        recurse(ans, nums, currArr, cur+1, n);
        currArr.push_back(nums[cur]);
        recurse(ans, nums, currArr, cur+1, n);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        recurse(ans, nums, {}, 0, nums.size());
        return ans;
    }
};