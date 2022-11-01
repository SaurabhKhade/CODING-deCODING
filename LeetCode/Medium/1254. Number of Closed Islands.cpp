class Solution {
    int m,n;
    vector<int> xMove = {-1,0,1,0}, yMove = {0, -1, 0, 1};
    
    bool dfs(vector<vector<int>>& grid, int i, int j, vector<vector<int>> &visited) {
        visited[i][j] = 1;
        bool isClosed = true;
        
        for(int k=0; k<4; k++) {
            int x = i + xMove[k], y = j + yMove[k];
            if(x<0 || x>=m || y<0 || y>=n) isClosed = false;
            else if(x>=0 && x<m && y>=0 && y<n) {
                if(grid[x][y]) continue;
                else if(!visited[x][y])  isClosed = isClosed & dfs(grid, x, y, visited);
            }
        }
        
        return isClosed;
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        int cnt=0;
        vector<vector<int>> visited(m, vector<int>(n,0));
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j]==0 && !visited[i][j]) {
                    bool isClosed = dfs(grid, i, j, visited);
                    if(isClosed) {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};