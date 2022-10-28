class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(auto &str:strs) {
            string str2 = str;
            sort(str.begin(),str.end());
            map[str].push_back(str2);
        }
        vector<vector<string>> ans;
        for(auto &v:map) {
            ans.push_back(v.second);
        }
        return ans;
    }
};