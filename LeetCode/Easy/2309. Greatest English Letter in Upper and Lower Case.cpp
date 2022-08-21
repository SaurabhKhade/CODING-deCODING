class Solution {
public:
    string greatestLetter(string s) {
        vector<int> lower(26), upper(26);
        for(auto &chr:s) {
            if(chr>='a') lower[chr-'a'] = 1;
            else upper[chr-'A'] = 1;
        }
        for(int i=25; i>=0; i--) {
            lower[i] += upper[i];
            if(lower[i] == 2) {
                return string(1,(char)(i+65));
            }
        }
        return "";
    }
};