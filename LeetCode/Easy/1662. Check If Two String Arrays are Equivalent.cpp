class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
//         string str1, str2;
//         for(auto &s:word1) {
//             str1 += s;
//         } 
//         for(auto &s:word2) {
//             str2 += s;
//         }
//         return str1 == str2;
        
        int i1=0,i2=0,j1=0,j2=0;
        while(true) {
            if(word1[i1][j1++] != word2[i2][j2++]) return false;
            if(j1 == word1[i1].size()) {
                j1 = 0;
                i1++;
            }
            if(j2 == word2[i2].size()) {
                j2 = 0;
                i2++;
            }
            if(i1==word1.size() && i2==word2.size()) return true;
            if(i1==word1.size() || i2==word2.size()) return false;
        }
    }
};