class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0, n = mat.size();
        for(int i=0; i<n; i++) {
            sum += mat[i][i];
        }
        for(int i=0,j=n-1; i<n && j>=0; i++, j--) {
            if(i == j) continue;
            sum += mat[i][j];
        }
        
        return sum;
    }
};