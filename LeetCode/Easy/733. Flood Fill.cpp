class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int color) {
        queue<pair<int,int>> q;
        vector<vector<int>> visited(img.size(), vector<int> (img[0].size(), 0));
        
        q.push({sr,sc});
        int old = img[sr][sc];
        img[sr][sc] = color;
        visited[sr][sc] = 1;
        
        int xCoords[] = {-1, 0, 1, 0};
        int yCoords[] = {0, -1, 0, 1};
        
        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            for(int i=0; i<4; i++) {
                int x2 = x+xCoords[i], y2 = y+yCoords[i];
                if(x2>=0 && x2<img.size() && y2>=0 && y2<img[0].size() && !visited[x2][y2] && img[x2][y2]==old) {
                    visited[x2][y2] = 1;
                    img[x2][y2] = color;
                    q.push({x2,y2});
                }
            }
        }
        return img;
    }
};