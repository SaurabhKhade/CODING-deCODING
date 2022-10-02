class Solution {
    void explore(vector<vector<int>>& graph, vector<bool> visited, vector<vector<int>> &paths, vector<int> path, int curr) {
        path.push_back(curr);
        visited[curr] = true;
        if(curr == graph.size()-1) {
            paths.push_back(path);
            return;
        }
        for(auto &node:graph[curr]) {
            explore(graph, visited, paths, path, node);
        }
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> paths;
        vector<bool> visited(graph.size());
        explore(graph, visited, paths, {}, 0);
        return paths;
    }
};