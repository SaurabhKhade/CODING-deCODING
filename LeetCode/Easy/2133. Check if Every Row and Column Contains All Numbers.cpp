class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<bool>>row(n, vector<bool>(n)), 
                            col(n, vector<bool>(n));
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                int t = matrix[i][j];
                if(t>=1 && t<=n && !row[i][t-1] && !col[j][t-1]) {
                    row[i][t-1] = true;
                    col[j][t-1] = true;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};