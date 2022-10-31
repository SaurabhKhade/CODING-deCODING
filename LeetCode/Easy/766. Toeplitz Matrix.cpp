class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat) {
        for(int i=0; i<mat.size(); i++) {
            for(int j=0; j<mat[0].size(); j++) {
                if(i-1>=0 && j-1>=0 && mat[i-1][j-1]!=mat[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }
};