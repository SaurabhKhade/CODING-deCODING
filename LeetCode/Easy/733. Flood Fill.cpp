class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int color) {
        int m = img.size(), n = img[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> visited(m, vector<int> (n));
        
        q.push({sr,sc});
        int old = img[sr][sc];
        img[sr][sc] = color;
        visited[sr][sc] = 1;
        
        vector<pair<int,int>> moves = {{-1,0},{0,-1},{1,0},{0,1}};
        
        while(!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            
            for(auto [x,y]:moves) {
                x+=i, y+=j;
                if(x>=0 && x<m && y>=0 && y<n && !visited[x][y] && img[x][y]==old) {
                    visited[x][y] = 1;
                    img[x][y] = color;
                    q.push({x,y});
                }
            }
        }
        return img;
    }
};