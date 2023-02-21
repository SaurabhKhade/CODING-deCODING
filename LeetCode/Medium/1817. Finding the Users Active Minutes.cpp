class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,set<int>> map;
        for(auto &v:logs) map[v[0]].insert(v[1]);
        vector<int> v(k);
        for(auto &[id,minutes]:map) v[minutes.size()-1]++;
        return v;
    }
};