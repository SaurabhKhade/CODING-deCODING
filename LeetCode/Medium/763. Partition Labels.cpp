class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> map;
        for(int i=0; i<s.size(); i++) map[s[i]] = i;
        int last = -1, max = 0;
        vector<int> ans;
        for(int i=0; i<s.size(); i++) {
            if(map[s[i]]>max) max = map[s[i]];
            if(i == max) {
                ans.push_back(max-last);
                last = max;
                max++;
            }
        }
        return ans;
    }
};