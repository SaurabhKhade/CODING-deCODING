class Solution {
public:
    bool operator ()(pair<string,int> &a, pair<string,int> &b) {
        if(a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> map;
        for(auto &i:words) map[i]++;
        
        priority_queue<pair<string,int>, vector<pair<string, int>>, Solution> pq;
        
        for(auto &p:map) pq.push(p);
        vector<string> res;
        
        while (k--) {
            res.push_back(pq.top().first);
            pq.pop();
        }
        
        return res;
    }
};