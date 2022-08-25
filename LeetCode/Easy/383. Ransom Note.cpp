class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int cnt[26];
        memset(cnt,0,sizeof(cnt));
        for(auto &i:ransomNote) cnt[i-'a']++;
        for(auto &i:magazine) cnt[i-'a']--;
        for(int i=0; i<26; i++) if(cnt[i]>0) return false;
        return true;
    }
};