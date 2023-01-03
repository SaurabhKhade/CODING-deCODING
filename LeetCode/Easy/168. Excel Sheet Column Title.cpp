class Solution {
public:
    string convertToTitle(int cn) {
        string s;
        if(cn==0) return s;
        if(cn%26==0) {
            s+=convertToTitle(cn/26-1);
            cn=26;
        }
        else if(cn>26) {
            s+=convertToTitle(cn/26);
            cn %= 26;
        }
        return s + (char)('A'+cn-1);
    }
};