class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int i=0, j=0;
        int len = 0;
        while(j<s.size()) {
            mp[s[j]]++;
            if(mp[s[j]] == 2) {
                len = max(len,j-i);
                do {
                    mp[s[i++]]--;
                } while(mp[s[j]] != 1);
            }
            j++;
        }
        return len = max(len,j-i);
    }
};