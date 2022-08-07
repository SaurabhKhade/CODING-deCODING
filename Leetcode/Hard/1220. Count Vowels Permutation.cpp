class Solution {
    int MOD = 1000000007;
public:
    int countVowelPermutation(int n) {
        vector<vector<unsigned long>> memory(5, vector<unsigned long> (n+1));
        for(int i=0; i<5; i++) {
            memory[i][0] = 0;
            memory[i][1] = 1;
        }
        vector<vector<int>> followers = {{1},{0,2},{0,1,3,4},{2,4},{0}};
        
        for(int i=2; i<=n; i++) {
            for(int j=0; j<5; j++) {
                for(auto k:followers[j]) {
                    memory[j][i] = (memory[j][i] + memory[k][i-1])%MOD;
                }
            }
        }
        
        unsigned long sum = 0;
        for(int i=0; i<5; i++) {
            sum += memory[i][n];
        }
        
        return sum%MOD;
    }
};