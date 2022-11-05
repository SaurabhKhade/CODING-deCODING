class Solution {
    int m,n;
    vector<pair<int,int>> moves = {{-1,0},{0,1},{1,0},{0,-1}};
    
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size(), n = heights[0].size();
        vector<vector<int>> pacific(m, vector<int>(n)), atlantic(m, vector<int>(n));
        vector<vector<int>> ans;
        
        for(int i=0; i<m; i++) {
            dfs(heights, pacific, i, 0);
            dfs(heights, atlantic, i, n-1);
        }
        
        for(int i=0; i<n; i++) {
            dfs(heights, pacific, 0, i);
            dfs(heights, atlantic, m-1, i);
        }
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(pacific[i][j] && atlantic[i][j]) {
                    ans.push_back({i,j});
                }
            }
        }
        
        return ans;
    }
    
    void dfs(vector<vector<int>>& heights, vector<vector<int>> &ocean, int i, int j) {
        ocean[i][j] = 1;
        
        for(auto [x,y]:moves) {
            x += i, y += j;
            if(x<0 || y<0 || x>=m || y>=n) {
                continue;
            } 
            if(ocean[x][y] == 0 && heights[x][y] >= heights[i][j]) {
               dfs(heights, ocean, x, y);
            }
        }
    }
};