class Solution {
    int n;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        vector<int> taken(n), curr;
        vector<vector<int>> ans;
        helper(nums, ans, curr, taken, 0);
        return ans;
    }
    
    void helper(vector<int>& nums, vector<vector<int>> &ans, vector<int> &curr, vector<int> &taken, int cnt){
        if(cnt==n) {
            ans.push_back(curr);
            return;
        }
        for(int i=0; i<n; i++) {
            if(taken[i]) continue;
            taken[i] = 1;
            curr.push_back(nums[i]);
            helper(nums, ans, curr, taken, cnt+1);
            curr.pop_back();
            taken[i] = 0;
        }
    }
};