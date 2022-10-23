class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> cols(matrix[0].size());
        vector<bool> rows(matrix.size());
        
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix[0].size(); j++) {
                if(matrix[i][j]==0) {
                    rows[i] = true;
                    cols[j] = true;
                }
            }
        }
        
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix[0].size(); j++) {
                if(rows[i] || cols[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};