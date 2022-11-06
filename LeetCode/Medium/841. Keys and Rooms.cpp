class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size());
        visited[0] = true;
        queue<int> bfs;
        bfs.push(0);
        
        while(!bfs.empty()) {
            int node = bfs.front();
            bfs.pop();
            for(auto &key:rooms[node]) {
                if(!visited[key]) {
                    bfs.push(key);
                    visited[key] = true;
                }
            }
        }
        
        for(auto i:visited) {
            if(!i) return false;
        }
        return true;
    }
};