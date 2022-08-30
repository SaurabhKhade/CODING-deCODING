class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size(),t;
        
        for(int i=0; i<(n/2+n%2); i++) {
            for(int j=0; j<n/2; j++) {
                t = mat[n-j-1][i];
                mat[n-j-1][i] = mat[n-i-1][n-j-1];
                mat[n-i-1][n-j-1] = mat[j][n-i-1];
                mat[j][n-i-1] = mat[i][j];
                mat[i][j] = t;
            }
        }
        
    }
};