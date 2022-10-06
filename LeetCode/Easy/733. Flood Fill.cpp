class Solution {
    int m, n, toChange;
    void fillColor(vector<vector<int>>& image, vector<vector<int>>& visited, int color, int sr, int sc) {
        image[sr][sc] = color;
        visited[sr][sc] = 1;
        if(sr>0 && image[sr-1][sc] == toChange && !visited[sr-1][sc]) 
            fillColor(image, visited, color, sr-1, sc);
        if(sc>0 && image[sr][sc-1] == toChange && !visited[sr][sc-1]) 
            fillColor(image, visited, color, sr, sc-1);
        if(sr<m-1 && image[sr+1][sc] == toChange && !visited[sr+1][sc]) 
            fillColor(image, visited, color, sr+1, sc);
        if(sc<n-1 && image[sr][sc+1] == toChange && !visited[sr][sc+1])
            fillColor(image, visited, color, sr, sc+1);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        m = image.size();
        n = image[0].size();
        toChange = image[sr][sc];
        vector<vector<int>> visited(m, vector<int>(n,0));
        fillColor(image, visited, color, sr, sc);
        return image;
    }
};