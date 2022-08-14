class Solution {
public:
    int edgeScore(vector<int>& edges) {
        map<int,unsigned long> mymap;
        for(int i=0; i<edges.size(); i++) {
            mymap[edges[i]] += i;
        }
        
        unsigned long max = 0, max_i = 0;
        for(auto &edge:mymap) {
            if(edge.second>max) {
                max = edge.second;
                max_i = edge.first;
            }
        }
        return max_i;
    }
};