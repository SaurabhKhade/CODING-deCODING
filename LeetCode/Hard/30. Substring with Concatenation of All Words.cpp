class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int> word_freq;
        for(auto &word:words) {
            word_freq[word]++;
        }
        vector<int> result;
        int substr_len = words[0].size()*words.size();
        if(substr_len > s.size()) return {};
        
        for(int i=0; i<=s.size()-substr_len; i++) {
            unordered_map<string,int> word_freq_found;
            for(int j=i; j<i+substr_len; j += words[0].size()) {
                string curr_substr = s.substr(j,words[0].size());
                if(word_freq.find(curr_substr) == word_freq.end()) break;
                
                word_freq_found[curr_substr]++;
                
                if(word_freq_found[curr_substr]>word_freq[curr_substr]) break;
            }
            
            if(word_freq_found == word_freq) result.push_back(i);
        }
        
        return result;
    }
};