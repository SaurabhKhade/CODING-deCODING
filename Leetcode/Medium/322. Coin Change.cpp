class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> memo(amount+1,amount+1);
        memo[0]=0;
        for(int i=1; i<=amount; i++) {
            for(auto j:coins) {
                if(j<=i) {
                    if(memo[i-j] == amount+1) continue;
                    if(memo[i-j]+1 < memo[i]) memo[i] = memo[i-j]+1;
                }
            }
        }
        return memo[amount]==amount+1?-1:memo[amount];
    }
};