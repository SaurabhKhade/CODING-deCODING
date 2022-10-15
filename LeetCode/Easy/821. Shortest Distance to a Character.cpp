class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v(s.size(), INT_MAX);
        for(int i=0; i<s.size(); i++) {
            if(s[i]==c) {
                v[i] = 0;
                for(int j=i-1; j>=0 && s[j]!=c; j--)
                    v[j] = min(v[j], i-j);
                
                for(int j=i+1; j<s.size() && s[j]!=c; j++)
                    v[j] = min(v[j], j-i);
            }
        }
        return v;
    }
};