class Solution {
    int m,n;
    
    void dfs(vector<vector<char>>& grid, int i, int j, vector<vector<int>> &visited, vector<int> &xCord, vector<int> &yCord) {
        grid[i][j] = '0';
        visited[i][j] = 1;
        
        for(int k=0; k<4; k++) {
            int x2 = i+xCord[k], y2 = j+yCord[k];
            if(x2>=0 && x2<grid.size() && y2>=0 && y2<grid[0].size() && !visited[x2][y2] && grid[x2][y2]=='1') {
                dfs(grid, x2, y2, visited, xCord, yCord);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n,0));
        int cnt = 0;
        vector<int> xCord = {-1, 0, 1, 0};
        vector<int> yCord = {0, -1, 0, 1};
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j]=='1') {
                    cnt++;
                    dfs(grid, i, j, visited, xCord, yCord);
                }
            }
        }
        
        return cnt;
    }
};