class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> map;
        for(auto &i:arr) map[i]++;
        
        vector<int> counts;
        for(auto &pair:map) counts.push_back(pair.second);
        
        sort(counts.begin(), counts.end(), greater<int>());
        
        int sum = 0, cnt = 0, ind=0;
        while(sum<arr.size()/2) {
            sum += counts[ind++];
            cnt++;
        }
        
        return cnt;
    }
};