class Solution {
    int MOD = 1000000007;
public:
    int countVowelPermutation(int n) {
        
        // let say 
        //     a = 0
        //     e = 1
        //     i = 2
        //     o = 3
        //     u = 4
        
        // now create matrix of 5xN for storing results
        vector<vector<long>> memory(5, vector<long> (n+1));
        
        // 0th column will be 0 because 0 is not going to be test case
        // 1st row will be 1 as for string of length 1, there is only one way which is the character itself
            
        for(int i=0; i<5; i++) {
            memory[i][0] = 0;
            memory[i][1] = 1;
        }
        
        // create the 2D array showing the characters going to follow current character,
        // for example
        //     'a' can be only followed by 'e' so array at 0th index will only have 1 in it
        //     'i' can be followed by either 'a','e','o' or 'u', so array at 2nd index have 0, 1, 3 and 4 in it.
            
        vector<vector<int>> followers = {{1},{0,2},{0,1,3,4},{2,4},{0}};
        
        // each next column, calculate the ways of current character by adding possible ways of their followers in previous column
        
        for(int i=2; i<=n; i++) {
            for(int j=0; j<5; j++) {
                for(auto k:followers[j]) {
                    memory[j][i] = (memory[j][i] + memory[k][i-1])%MOD;
                }
            }
        }
        
        // return total string in the asked column
        long sum = 0;
        for(int i=0; i<5; i++) {
            sum += memory[i][n];
        }
        
        return sum%MOD;
    }
};