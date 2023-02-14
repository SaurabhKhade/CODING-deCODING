class Solution {
    
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end(),Solution());
        for(int i=0; i<strs[0].size(); i++) {
            for(int j=0; j<strs.size(); j++) {
                if(strs[j][i] != strs[0][i]) return strs[0].substr(0,i);
            }
        }
        return strs[0];
    }
    bool operator()(string &a, string &b) {
        return a.size()<b.size();
    }
};