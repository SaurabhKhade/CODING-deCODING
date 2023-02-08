class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n);
        return helper(nums, 0, n-1, dp)==2;
    }
    // 0: unvisited
    // 1: cant reach to end
    // 2: can reach
    int helper(vector<int>& nums, int curr, int last, vector<int>& dp) {
        if(curr>=last) return 2;
        if(dp[curr] != 0) return dp[curr];
        int flag = 1;
        for(int i=1; i<=nums[curr]; i++) {
            if(helper(nums, curr+i, last, dp)==2) {
                flag = 2;
                break;
            }
        }
        
        return dp[curr] = flag;
    }
};
