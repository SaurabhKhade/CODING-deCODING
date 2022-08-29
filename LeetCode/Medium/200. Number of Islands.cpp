class Solution {
    void removeLand(vector<vector<char>>& grid, int i, int j) {
        // if cell is invalid or has char '0' return
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] == '0') return;
        
        // set cell to '0' and recursively check same for its adjacent cells
        grid[i][j] = '0';
        removeLand(grid,i-1,j);
        removeLand(grid,i+1,j);
        removeLand(grid,i,j-1);
        removeLand(grid,i,j+1);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        
        // traverse throgh all cells
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                // if cell is 1 increase count and remove all adjacent 1 and there adjacent 1 and so on...
                if(grid[i][j]=='1') {
                    cnt++;
                    removeLand(grid,i,j);
                }
            }
        }
        return cnt;
    }
};