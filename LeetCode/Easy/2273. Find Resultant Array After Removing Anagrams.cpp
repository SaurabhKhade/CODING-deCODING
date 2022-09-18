class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        bool repeat = true;
        vector<string> anagrams(words.begin(), words.end());
        for(auto &el: anagrams) sort(el.begin(), el.end());
        while(words.size()>1 && repeat) {
            repeat = false;
            int i = 1;
            while(i<words.size()) {
                if(anagrams[i]==anagrams[i-1]) {
                    anagrams.erase(anagrams.begin()+i);
                    words.erase(words.begin()+i);
                } 
                else i++;
            }
        }
        return words;
    }
};