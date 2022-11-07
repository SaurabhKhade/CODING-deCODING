class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<vector<int>> graph(n);
        vector<bool> visited(n);
        
        for(auto &con: connections) {
            graph[con[0]].push_back(con[1]);
            graph[con[1]].push_back(con[0]);
        }
        
        int total_extra_cables = 0, networks = 0;
        
        for(int i=0; i<n; i++) {
            if(!visited[i]) {
                networks++;
                int extra_cables = 0;
                dfs(graph, visited, extra_cables, i, i);
                total_extra_cables += (extra_cables/2);
            }
        }
        
        if(total_extra_cables >= networks-1) {
            return networks-1;
        }
        return -1;
    }
    
    void dfs(vector<vector<int>> &graph, vector<bool> &visited, int &extra_cables, int i, int prev) {
        visited[i] = true;
        for(auto &node:graph[i]) {
            if(!visited[node]) {
                dfs(graph, visited, extra_cables, node, i);
            } else if(node!=prev){
                extra_cables++;
            }
        }
    }
};