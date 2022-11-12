class Solution {
    int helper(int stair, vector<int> &cost) {
        if(stair<0) return 0;
        if(cost[stair] != -1) return cost[stair];
        return cost[stair] = helper(stair-1, cost) + helper(stair-2, cost);
    }
public:
    int climbStairs(int n) {
        vector<int> cost(n+1, -1);
        cost[0] = 1;
        cost[1] = 1;
        return helper(n, cost);
        return cost[n];
    }
};