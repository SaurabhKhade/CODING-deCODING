class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> cnt1(26), cnt2(26);
        
        for(auto &c:s1) cnt1[c-'a']++;
        int i=0, j=0;
        while(j<s2.size()) {
            int pos = s2[j]-'a';
            cnt2[pos]++;
            if(cnt2[pos] > cnt1[pos]) {
                do {
                    cnt2[s2[i++]-'a']--;
                } while(cnt2[pos] != cnt1[pos]);
            }
            j++;
            if(cnt2 == cnt1) return true;
        }
        if(cnt2 == cnt1) return true;
        return false;
    }
};