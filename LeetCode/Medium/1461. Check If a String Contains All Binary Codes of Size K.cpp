class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k) return false;
        
        unordered_set<string> set;
        for(int i=0; i<=s.size()-k; i++) {
            set.insert(s.substr(i,k));
        }
        
        if(set.size() == pow(2,k)) return true;
        return false;
    }
};