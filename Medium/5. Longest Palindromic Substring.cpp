class Solution {
public:
    string longestPalindrome(string s) {
        vector<vector<int>> matrix;
        vector<int> row(s.size(), false);
        matrix.assign(s.size(), row);
        
        int longest = 1;
        string longestString = s.substr(0,1);
        
        for(int i=0; i<s.size(); i++) {
            matrix[i][i] = true;
        }
        
        for(int i=0; i<s.size()-1; i++) {
            if(s[i] == s[i+1]) {
                longest = 2;
                longestString = s.substr(i,2);
                matrix[i][i+1] = true;
            }
        }
        
        for(int i=2; i<s.size(); i++) {
            for(int j=0; j<s.size()-i; j++) {
                if(matrix[j+1][j+i-1] && s[j]==s[j+i]) {
                    matrix[j][j+i] = true;
                    if(i+1 > longest) {
                        longest = i+1;
                        longestString = s.substr(j,longest);
                    }
                }
            }
        }
        
        return longestString;
    }
};