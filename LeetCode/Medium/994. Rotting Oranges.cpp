class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n));
        int nFresh = 0, time = 0;
        vector<pair<int,int>> move = {{-1,0}, {0,1}, {1,0}, {0,-1}};
        queue<pair<pair<int,int>, int>> bfs;
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j]==2) {
                    bfs.push({{i,j},0});
                    visited[i][j] = 1;
                } else if(grid[i][j]) {
                    nFresh++;
                }
            }
        }
        
        while(!bfs.empty()) {
            auto [i,j] = bfs.front().first;
            int d = bfs.front().second;
            bfs.pop();
            time = max(time,d);
            
            for(auto [x,y]:move) {
                x+=i, y+=j;
                if(x<0 || x>=m || y<0 || y>=n) continue;
                if(grid[x][y]==1 && !visited[x][y]) {
                    visited[x][y] = 1;
                    bfs.push({{x,y},d+1});
                    nFresh--;
                }
            }
        }
        
        if(nFresh>0) return -1;
        return time;
    }
};