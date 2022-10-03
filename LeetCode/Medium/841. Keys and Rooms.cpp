class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q;
        vector<int> visited(rooms.size());
        visited[0] = 1;
        for(auto &key:rooms[0]) q.push(key);
        
        while(!q.empty()) {
            visited[q.front()] = 1;
            for(auto &key:rooms[q.front()]) {
                if(!visited[key]) q.push(key);
            }
            q.pop();
        }
        for(auto &status:visited) {
            if(!status) return false;
        }
        return true;
    }
};