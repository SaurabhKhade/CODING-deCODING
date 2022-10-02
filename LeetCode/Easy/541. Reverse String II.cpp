class Solution {
    string reverse(string s) {
        int start = 0, end = s.size()-1;
        char temp;
        while(start<end) {
            temp = s[start];
            s[start++] = s[end];
            s[end--] = temp;
        }
        return s;
    }
public:
    string reverseStr(string s, int k) {
        int ind = 0;
        string ans;
        while(ind < s.size()) {
            ans += reverse(s.substr(ind, k));
            if(ind+k > s.size()) break;
            ans += s.substr(ind+k, k);
            ind += 2*k;
        }
        return ans;
    }
};