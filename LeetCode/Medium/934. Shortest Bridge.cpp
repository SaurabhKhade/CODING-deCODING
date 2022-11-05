class Solution {
    int n;
    vector<pair<int,int>> moves = {{-1,0},{0,1},{1,0},{0,-1}};
    
    void dfs(vector<vector<int>>& grid,vector<vector<int>> &visited, int i, int j,queue<pair<pair<int,int>,int>> &bfs) {
        
        // Perform DFS traversal and at the same time, push visited nodes in queue for further BFS traversal
        visited[i][j] = 1;
        bfs.push({{i,j},0});
        
        for(int k=0; k<4; k++) {
            auto [x,y] = moves[k];
            x+=i,y+=j;
            if(x<0 || x>=n || y<0 || y>=n) continue;
            if(grid[x][y] && !visited[x][y]) {
                dfs(grid,visited,x,y,bfs);
            }
        }
    }
    
    void traverseFirstIceland(vector<vector<int>>& grid,vector<vector<int>> &visited, queue<pair<pair<int,int>,int>> &bfs) {
        
        // traverse only the first iceland and return back
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j]) {
                    dfs(grid,visited,i,j,bfs);
                    return;
                }
            }
        }
    }
public:
    int shortestBridge(vector<vector<int>>& grid) {
        n = grid.size();
        vector<vector<int>> visited(n, vector<int>(n));
        queue<pair<pair<int,int>,int>> bfs;
        
        // First traverse the first iceland and push all its 1's in the queue along with distance of 1 unit for further BFS traversal
        traverseFirstIceland(grid,visited,bfs);
        
        // BFS
        while(!bfs.empty()) {
            auto [i,j] = bfs.front().first;
            int d = bfs.front().second;
            bfs.pop();
            
            for(int k=0; k<4; k++) {
                auto [x,y] = moves[k];
                x+=i, y+=j;
                if(x<0 || x>=n || y<0 || y>=n) continue;
                
                // Visit all unvisited 0's layer wise and save there position and distance to queue
                if(grid[x][y]==0 && !visited[x][y]) {
                    bfs.push({{x,y},d+1});
                    visited[x][y] = 1;
                    
                } 
                // If a unvisited 1 occured as neighbor, it means that it belongs to another iceland, so return the distance of current cell, which will be equal to the count of zeros we have explored in the path so, far
                // As we are exploring the graph layer wise, the first occuring 1 itself will be the reanrest
                else if(grid[x][y]==1 && !visited[x][y]) {
                    return d;
                }
            }
        }
        
        return 0;
    }
};