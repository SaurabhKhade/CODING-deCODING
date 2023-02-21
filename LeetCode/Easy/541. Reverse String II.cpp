class Solution {
public:
    string reverseStr(string s, int k) {
        int n = 0;
        while(s.begin()+n+k<s.end()) {
            reverse(s.begin()+n,s.begin()+n+k);
            n += 2*k;
        }
        if(s.begin()+n<s.end()) {
            reverse(s.begin()+n,s.end());
        }
        return s;
    }
};