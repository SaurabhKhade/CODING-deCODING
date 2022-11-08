class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool> isSafe(n);
        vector<bool> visited(n);
        vector<int> ans;
        
        for(int i=0; i<n; i++) {
            if(!visited[i]) {
                dfs(graph, isSafe, visited, i);
            }
        }
        
        for(int i=0; i<n; i++) {
            if(isSafe[i]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
    
    void dfs(vector<vector<int>>& graph, vector<bool> &isSafe, vector<bool> &visited, int i) {
        visited[i] = true;
        if(graph[i].size()==0) {
            isSafe[i] = true;
            return;
        }
        
        bool isSafeNode = true;
        for(auto &node:graph[i]) {
            if(!visited[node]) {
                dfs(graph, isSafe, visited, node);
            }
            if(!isSafe[node]) {
                isSafeNode = false;
            }
        }
        
        isSafe[i] = isSafeNode;
    }
};