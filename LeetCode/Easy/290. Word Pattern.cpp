class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<int> pat;
        unordered_map<char,int> map;
        unordered_map<string,int> map2;
        int ind = 1;
        
        for(auto &chr:pattern){
            if(map[chr]==0) {
                map[chr] = ind++;
            }
            pat.push_back(map[chr]);
        }
        
        ind = 1;
        stringstream ss(s);
        string word;
        vector<string> sv;
        while(ss>>word) sv.push_back(word);
        vector<int> pat2;
        
        for(auto i=0; i<sv.size(); i++) {
            if(map2[sv[i]]==0) {
                map2[sv[i]] = ind++;
            }
            pat2.push_back(map2[sv[i]]);
        }
        
        if(pat.size() != pat2.size()) return false;
        
        for(int i=0; i<pat.size(); i++) {
            if(pat[i]!=pat2[i]) return false;
        }
        
        return true;
    }
};