class Solution {
public:
    string oddString(vector<string>& words) {
        unordered_map<string,vector<string>> mp;
        for(auto &str:words) {
            string t = str;
            int diff = str[0]-'a';
            for(auto &s:str) {
                s -= diff;
            }
            mp[str].push_back(t);
            if(mp[str].size()>1 && mp.size()>1) break;
        }
        for(auto &p:mp) {
            if(p.second.size()==1) {
                return p.second[0];
            }
        }
        return "none";
    }
};