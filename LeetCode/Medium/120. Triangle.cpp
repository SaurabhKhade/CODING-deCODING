class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size()==1) return triangle[0][0];
        int m = triangle.size();
        int n = triangle[m-1].size();
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return helper(triangle,0,0,dp);
    }
    
    int helper(vector<vector<int>>& triangle, int i, int j, vector<vector<int>> &dp) {
        if(i>=triangle.size()) return 0;
        if(j>=triangle[i].size()) return INT_MAX;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = min(triangle[i][j]+helper(triangle, i+1, j, dp), triangle[i][j]+helper(triangle, i+1, j+1, dp));
    }
};