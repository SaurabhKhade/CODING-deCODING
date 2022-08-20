class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<long> pq;
        long position = startFuel, refills = 0, station_index = 0;
        
        while(position < target) {
            for(station_index; station_index<stations.size() && stations[station_index][0]<=position; station_index++) {
                pq.push(stations[station_index][1]);
            }
            if(pq.empty()) return -1;
            position += pq.top();
            refills++;
            pq.pop();
        }
        return refills;
    }
};