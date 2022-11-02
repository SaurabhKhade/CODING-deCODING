class Solution {
    int m,n;
    vector<int> xMove={-1,0,1,0}, yMove={0,-1,0,1};
    
    bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j, vector<vector<int>> &visited) {
        visited[i][j] = 1;
        bool isSubIslands = grid1[i][j];
        
        for(int k=0; k<4; k++) {
            int x = i + xMove[k], y = j + yMove[k];
            if(x<0 || x>=m || y<0 || y>=n) 
                continue;
            else if(grid2[x][y] && !visited[x][y])
                isSubIslands = isSubIslands & dfs(grid1, grid2, x, y, visited);
        }
        
        return isSubIslands;
    }
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        m = grid2.size(), n = grid2[0].size();
        vector<vector<int>> visited(m, vector<int>(n));
        int subIslands = 0;
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid2[i][j] && !visited[i][j]) {
                    bool isSubIslands = dfs(grid1, grid2, i, j, visited);
                    if(isSubIslands) {
                        subIslands++;
                    }
                }
            }
        }
        
        return subIslands;
    }
};