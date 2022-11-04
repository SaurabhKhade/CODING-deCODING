class Solution {
    int m,n;
    vector<int> xMove={-1,0,1,0}, yMove={0, 1, 0, -1};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        m=mat.size(), n=mat[0].size();
        vector<vector<int>> ans(m,vector<int>(n,m*n));
        
        queue<pair<pair<int,int>,int>> bfs;
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(mat[i][j]==0) {
                    ans[i][j]=0;
                    bfs.push({{i,j},0});
                }
            }
        }
        
        while(!bfs.empty()) {
            auto [x,y] = bfs.front().first;
            int dis = bfs.front().second+1;
            bfs.pop();
            for(int k=0; k<4; k++) {
                int x2 = x+xMove[k], y2 = y+yMove[k];
                if(x2<0 || x2>=m || y2<0 || y2>=n) continue;
                if(ans[x2][y2]>dis) {
                    ans[x2][y2] = dis;
                    bfs.push({{x2,y2},dis});
                }
            }
        }
        
        return ans;
    }
};