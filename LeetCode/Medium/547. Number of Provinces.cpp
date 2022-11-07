class Solution {
    int m;
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        m = isConnected.size();
        vector<bool> visited(m);
        int cnt = 0;
        
        for(int i=0; i<m; i++) {
            if(!visited[i]) {
                cnt++;
                dfs(isConnected, visited, i);
            }
        }
        
        return cnt;
    }
    
    void dfs(vector<vector<int>>& isConnected, vector<bool> &visited, int i) {
        visited[i] = true;
        for(int j=0; j<m; j++) {
            if(isConnected[i][j] && !visited[j]) {
                dfs(isConnected, visited, j);
            }
        }
    }
};