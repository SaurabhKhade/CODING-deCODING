class Solution {
    int m,n;
    vector<pair<int,int>> moves = {{-1,0},{0,-1},{1,0},{0,1}};
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        int maxArea = 0, cnt = 0;
        vector<vector<int>> visited(m, vector<int>(n));
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] && !visited[i][j]) {
                    cnt = 0;
                    dfs(grid, i, j, visited, cnt);
                    maxArea = max(maxArea, cnt);
                }
            }
        }
        return maxArea;
    }
    
    void dfs(vector<vector<int>>& grid, int i, int j, vector<vector<int>> &visited, int &cnt) {
        cnt++;
        visited[i][j] = 1;
        
        for(auto [x,y]:moves) {
            x += i, y += j;
            if(x>=0 && x<m && y>=0 && y<n && !visited[x][y] && grid[x][y]) {
                dfs(grid, x, y, visited, cnt);
            }
        }
    }
};