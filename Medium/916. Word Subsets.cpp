class Solution {
    void update(string word, vector<int> &freq) {
        vector<int> word_freq(26,0);
        for(auto i: word) word_freq[i-'a']++;
        for(int i=0; i<26; i++) if(word_freq[i]>freq[i]) freq[i] = word_freq[i];
    }
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> freq(26,0);
        vector<string> result;
            
        for(auto word: words2) update(word, freq);
        
        for(auto word: words1) {
            vector<int> word_freq(26,0);
            for(auto i: word) word_freq[i-'a']++;
            
            bool flag = true;
            for(int i=0; i<26; i++) 
                if(word_freq[i]<freq[i]) {
                    flag = false;
                    break;
                }
            
            if(flag) result.push_back(word);
        }
        return result;
    }
};