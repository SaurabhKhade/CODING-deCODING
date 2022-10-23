class Solution {
    void iterate(vector<vector<int>> &ans, vector<int> &v, vector<int>& nums, int i) {
        ans.push_back(v);
        
        for(int j=i; j<nums.size(); j++) {
            if(j>i && nums[j]==nums[j-1]) continue;
            v.push_back(nums[j]);
            iterate(ans,v,nums,j+1);
            v.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> v;
        iterate(ans, v, nums, 0);
        return ans;
    }
};