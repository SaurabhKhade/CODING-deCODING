class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0;
        for(auto &chr:word) if(chr<='Z') cnt++;
        if(cnt==0 || cnt==word.size() || (cnt==1 && word[0]<='Z')) return true;
        return false;
    }
};