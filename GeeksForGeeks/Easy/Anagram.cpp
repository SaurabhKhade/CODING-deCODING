class Solution {
    public:
    bool isAnagram(string a, string b){
        vector<int> cnt_a(26), cnt_b(26);
        for(auto &i:a) {
            cnt_a[i-'a']++;
        }
        for(auto &i:b) {
            cnt_b[i-'a']++;
        }
        for(int i=0; i<26; i++) {
            if(cnt_a[i] != cnt_b[i]) return false;
        }
        
        return true;
    }
}