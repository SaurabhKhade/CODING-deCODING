class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        const int m=maze.size(), n=maze[0].size();
        
        // queue will be used to make BFS traversal along with save the distance of each cell from starting one
        queue<pair<pair<int,int>,int>> bfs;
        vector<vector<int>> visited(m, vector<int>(n));
        // int *visited = new int[m][n];
        
        // All moves we can take from certain cell
        vector<pair<int,int>> moves = {{-1,0},{0,1},{1,0},{0,-1}};
        int sr = entrance[0], sc = entrance[1];
        visited[sr][sc] = 1;
        
        // first push all the legal neighbors of current cell in the queue with distance of 1 unit and mark them visited
        for(int i=0; i<4; i++) {
            auto [x,y] = moves[i];
            x+=sr, y+=sc;
            if(x<0 || x>=m || y<0 || y>=n) continue;
            if(maze[x][y]=='.') {
                bfs.push({{x,y}, 1});
                visited[x][y] = 1;
            }
        }
        
        // BFS
        while(!bfs.empty()) {
            auto [i,j] = bfs.front().first;
            int d = bfs.front().second;
            bfs.pop();
            
            for(int k=0; k<4; k++) {
                auto [x,y] = moves[k];
                x+=i, y+=j;
                
                // If the cell is at boundary of the maze, we will return the distance of current cell from the starting one
                if(x<0 || x>=m || y<0 || y>=n) {
                    return d;
                }
                // Else if the neighbour node is legal and unvisited, we will push it in a queue
                if(maze[x][y]=='.' && !visited[x][y]) {
                    bfs.push({{x,y}, d+1});
                    visited[x][y] = 1;
                }
            }
        }
        
        // If it's impossible to find exit, the loop will be end and we will return -1
        return -1;
    }
};