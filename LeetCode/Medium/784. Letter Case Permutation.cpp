class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        helper(s,ans,0);
        return ans;
    }
    void helper(string &s, vector<string> &ans, int i) {
        ans.push_back(s);
        if(i>=s.size()) return;
        for(; i<s.size(); i++) {
            if(s[i]>='a' && s[i]<='z') {
                s[i] -= 32;
                helper(s, ans, i+1);
                s[i] += 32;
            } else if(s[i]>='A' && s[i]<='Z') {
                s[i] += 32;
                helper(s, ans, i+1);
                s[i] -= 32;
            }
        }
    }
};