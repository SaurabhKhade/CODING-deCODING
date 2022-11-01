class Solution {
    int m,n;
    
    int findOut(vector<vector<int>>& grid, int start) {
        for(int i=0; i<m; i++) {
            if(grid[i][start] == 1) {
                 if(start+1 < n && grid[i][start+1] == 1)
                     start += 1;
                 else
                     return -1;
            } else {
                if(start-1 >=0 && grid[i][start-1] == -1)
                     start -= 1;
                 else
                     return -1;
            }
        }
        return start;
    }
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        if(n==1) return {-1};
        vector<int> v(n);
        
        for(int i=0; i<n; i++) {
            int out = findOut(grid, i);
            v[i] = out;
        }
        
        return v;
    }
};