class Solution {
public:
    string reverseWords(string s) {
        auto itr = s.begin();
        for(auto i = s.begin(); i != s.end(); i++) {
            if(*i == ' ') {
                reverse(itr,i);
                itr = i+1;
            }
        }
        reverse(itr,s.end());
        return s;
    }
};