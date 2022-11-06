class Solution {
    int m;
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        m = graph.size();
        vector<int> visited(m), currentPath={0};
        vector<vector<int>> paths;
        visited[0] = 1;
        dfs(graph, paths, currentPath, visited, 0);
        return paths;
    }
    
    void dfs(vector<vector<int>>& graph, vector<vector<int>> &paths, vector<int> &currentPath, vector<int> &visited, int i) {
        if(i==m-1) {
            paths.push_back(currentPath);
            return;
        }
        for(auto &node:graph[i]) {
            currentPath.push_back(node);
            visited[node] = 1;
            dfs(graph, paths, currentPath, visited, node);
            currentPath.pop_back();
            visited[node] = 0;
        }
    }
};