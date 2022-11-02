class Solution {
    int m,n;
    vector<int> xMove={-1,0,1,0}, yMove={0,-1,0,1};
    
    int dfs(vector<vector<int>>& grid, int i, int j, vector<vector<int>> &visited, int &cnt) {
        visited[i][j] = 1;
        cnt++;
        
        bool isEnclave = true;
        
        for(int k=0; k<4; k++) {
            int x = i + xMove[k], y = j + yMove[k];
            if(x<0 || x>=m || y<0 || y>=n) 
                isEnclave = false;
            else if(grid[x][y] && !visited[x][y])
                isEnclave = isEnclave & dfs(grid, x, y, visited, cnt);
        }
        
        return isEnclave;
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n));
        int enclaves = 0;
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] && !visited[i][j]) {
                    int cnt = 0;
                    bool isEnclave = dfs(grid, i, j, visited, cnt);
                    if(isEnclave) {
                        enclaves += cnt;
                    }
                }
            }
        }
        
        return enclaves;
    }
};