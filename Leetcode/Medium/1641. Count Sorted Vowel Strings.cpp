class Solution {
public:
    int countVowelStrings(int n) {
        vector<vector<int>> memory(5, vector<int> (n+1));
        
        for(int i=0; i<5; i++) {
            memory[i][1] = 1;
        }
        
        for(int i=2; i<=n; i++) {
            int sum = 0;
            for(int j=4; j>=0; j--) {
                sum += memory[j][i-1];
                memory[j][i] = sum;
            }
        }
        
        int sum = 0;
        for(int i=0; i<5; i++) {
            sum += memory[i][n];
        }
        return sum;
    }
};