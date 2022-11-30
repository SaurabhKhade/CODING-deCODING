class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        for(auto &i:arr) {
            map[i]++;
        }
        vector<bool> cnt(1000);
        for(auto &p:map) {
            if(cnt[p.second]) return false;
            cnt[p.second] = true;
        }
        return true;
    }
};