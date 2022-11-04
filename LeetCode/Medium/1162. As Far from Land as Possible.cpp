class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> distance(n, vector<int> (n));
        vector<vector<int>> visited(n, vector<int> (n));
        vector<vector<int>> neighbors = {{-1,0}, {0,1}, {1,0}, {0,-1}};
        
        queue<pair<pair<int,int>,int>> bfs;
        int max_dist = -1;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j]) {
                    bfs.push({{i,j},0});
                }
            }
        }
        
        while(!bfs.empty()) {
            auto [i,j] = bfs.front().first;
            int dist = bfs.front().second + 1;
            bfs.pop();
            
            for(auto &v: neighbors) {
                int x = i + v[0], y = j + v[1];
                if(x<0 || x>=n || y<0 || y>=n) continue;
                if(grid[x][y]==0 && distance[x][y]<dist && !visited[x][y]) {
                    distance[x][y] = dist;
                    visited[x][y] = 1;
                    max_dist = max(max_dist,dist);
                    bfs.push({{x,y},dist});
                }
            }
        }
        
        return max_dist;
    }
};