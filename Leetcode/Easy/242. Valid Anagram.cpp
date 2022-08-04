class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> map_s, map_t;
        for(auto i:s) map_s[i]++;
        for(auto i:t) map_t[i]++;
        for(int i=0; i<26; i++) if(map_s[i+97] != map_t[i+97]) return false;
        return true;
    } 
};