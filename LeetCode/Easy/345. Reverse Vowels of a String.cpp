class Solution {
public:
    string reverseVowels(string s) {
        unordered_map<char,bool> vowels= {{'a',true},{'e',true},{'i',true},{'o',true},{'u',true},{'A',true},{'E',true},{'I',true},{'O',true},{'U',true}};
        
        int left = 0, right=s.size();
        while(left < right) {
            while(left<s.size() && !vowels[s[left]]) left++;
            while(right>left && !vowels[s[right]]) right--;
            if(left>=right) break;
            swap(s[left++],s[right--]);
        }
        
        return s;
    }
};