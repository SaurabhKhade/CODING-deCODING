class Solution {
    string encode(string s) {
        unordered_map<char,int> map;
        int curr = 1;
        string code="";
        for(auto i:s) {
            
            if(map[i] == 0) {
                map[i] = curr++;
            }
            code+=to_string(map[i]);
            code+="_";
        }
        return code;
    }
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> result, codes;
        for(auto i: words) {
            codes.push_back(encode(i));
        }
        string target = encode(pattern);
        for(int i=0; i<codes.size(); i++) {
            if(codes[i]==target) {
                result.push_back(words[i]);
            }
        }
        return result;
    }
};