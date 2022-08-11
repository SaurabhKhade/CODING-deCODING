class WordDictionary {
    unordered_map<int, vector<string>> map;
public:
    WordDictionary() {
    }
    
    void addWord(string word) {
        map[word.size()].push_back(word);
    }
    
    bool search(string word) {      
        for(auto &i:map[word.size()]) {
            bool flag = true;
            for(int j=0; j<word.size(); j++) {
                if(word[j]=='.') continue;
                else if(word[j] != i[j]) {
                    flag = false;
                    break;
                }
            }
            if(flag) return true;
        }
        return false;
    }
};