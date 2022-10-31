class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat) {
        for(int i=0; i<mat[0].size(); i++) {
            int j=0, k = i;
            while(k<mat[0].size() && j<mat.size()) {
                if(mat[j][k] != mat[0][i]) return false;
                j++,k++;
            }
        }
        for(int i=1; i<mat.size(); i++) {
            int j=i, k = 0;
            while(k<mat[0].size() && j<mat.size()) {
                if(mat[j][k] != mat[i][0]) return false;
                j++,k++;
            }
        }
        return true;
    }
};