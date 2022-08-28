class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row = mat.size(), col = mat[0].size();
        vector<int> v;
        for(int r=0; r<row; r++) {
            v.clear();
            for(int i=r,j=0; j<col && i<row; i++,j++) v.push_back(mat[i][j]);
            sort(v.begin(), v.end());
            for(int i=r,j=0; j<col && i<row; i++,j++) mat[i][j] = v[j];
        }
        for(int c=0; c<col; c++) {
            v.clear();
            for(int i=0,j=c; j<col && i<row; i++,j++) v.push_back(mat[i][j]);
            sort(v.begin(), v.end());
            for(int i=0,j=c; j<col && i<row; i++,j++) mat[i][j] = v[i];
        }
        return mat;
    }
};