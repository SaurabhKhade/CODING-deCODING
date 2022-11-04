class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0] == 1) return -1;
        if(n==1) return 1;
        
        vector<vector<int>> visited(n, vector<int>(n));
        queue<pair<pair<int,int>,int>> bfs;
        bfs.push({{0,0},1});
        visited[0][0] = 1;
        
        while(!bfs.empty()) {
            auto [x,y] = bfs.front().first;
            int dist = bfs.front().second+1;
            bfs.pop();
            
            for(int i=-1; i<=1; i++) {
                for(int j=-1; j<=1; j++) {
                    int x2 = x+i, y2 = y+j;
                    if(x2<0 || x2>=n || y2<0 || y2>=n) continue;
                    if(grid[x2][y2]==0 && !visited[x2][y2]) {
                        if(x2==n-1 && y2==n-1) return dist;
                        visited[x2][y2] = 1;
                        bfs.push({{x2,y2},dist});
                    }
                }
            }
        }
        
        return -1;
    }
};