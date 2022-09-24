class Solution {
public:
    string reverseWords(string s) {
        string srev, word;
        for(auto &chr:s) {
            if(chr != ' ') word = chr + word;
            else {
                srev += word+" ";
                word = "";
            }
        }
        srev += word;
        return srev;
    }
};
