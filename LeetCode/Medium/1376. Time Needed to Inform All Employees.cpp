class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        if(n==1) return informTime[0];
        
        vector<vector<int>> graph(n);
        queue<pair<int,int>> bfs;
        int time = 0;
            
        for(int i=0; i<n; i++) {
            if(i==headID) continue;
            graph[manager[i]].push_back(i);
        }
        
        bfs.push({headID, informTime[headID]});
        while(!bfs.empty()) {
            auto [id,t] = bfs.front();
            bfs.pop();
            time = max(time,t);
            
            for(auto &i:graph[id]) {
                bfs.push({i,t+informTime[i]});
            }
        }
        
        return time;
    }
};