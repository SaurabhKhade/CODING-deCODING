class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        set<int> nodes;
        vector<bool> has_edge(1e5+1);
        for(auto &edge:edges) {
            nodes.insert(edge[0]);
            nodes.insert(edge[1]);
            has_edge[edge[1]] = true;
        }
        vector<int> ans;
        for(auto &node: nodes) {
            if(!has_edge[node]) ans.push_back(node);
        }
        return ans;
    }
};