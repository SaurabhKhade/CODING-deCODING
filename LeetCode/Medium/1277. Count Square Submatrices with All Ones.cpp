class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        int memory[mat.size()+1][mat[0].size()+1];
        memset(memory,0,sizeof(memory));
        int cnt = 0;
        
        for(int i=1; i<=mat.size(); i++) {
            for(int j=1; j<=mat[0].size(); j++) {
                if(mat[i-1][j-1]) {
                    memory[i][j] = 1 + min(min(memory[i-1][j],memory[i][j-1]),memory[i-1][j-1]);
                    cnt += memory[i][j];
                }
            }
        }
        
        return cnt;
    }
};