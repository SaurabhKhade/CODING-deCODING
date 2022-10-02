class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        
        for(auto &edge: edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        vector<bool> visited(n);
        visited[source] = true;
        
//         BFS
//         queue<int> q;
//         q.push(source);
        
//         while(!q.empty()) {
//             if(q.front()==destination) return true;
//             for(auto &node:graph[q.front()]) {
//                 if(!visited[node]) {
//                     visited[node] = true;
//                     q.push(node);
//                 }
//             }
//             q.pop();
//         }
        
//         DFS
        stack<int> st;
        st.push(source);
        
        while(!st.empty()) {
            if(st.top()==destination) return true;
            int top = st.top();
            st.pop();
            for(auto &node:graph[top]) {
                if(!visited[node]) {
                    visited[node] = true;
                    st.push(node);
                }
            }
        }
        
        return false;
    }
};