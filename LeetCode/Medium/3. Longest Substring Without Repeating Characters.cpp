class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        for(int i=0; i<s.size(); i++) {
            unordered_set<char> uniques;
            for(int j=i; j<s.size(); j++) {
                uniques.insert(s[j]);
                if(uniques.size() != j-i+1) {
                    break;
                }
            }
            if(uniques.size() > longest) longest = uniques.size();
        }
        return longest; 
    }
};