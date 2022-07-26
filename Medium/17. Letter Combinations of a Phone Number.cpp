class Solution {
    vector<vector<char>> characters;
    
    void generate(vector<string> &res, int index, string digits, string curr) {
        if(index==digits.size()) {
            res.push_back(curr);
            return;
        }
        for(auto i:characters[digits[index]-'2']) 
            generate(res, index+1, digits, curr+i);
    }
public:
    Solution() {
        vector<char> two= {'a','b','c'};
        characters.push_back(two);
        vector<char> three= {'d','e','f'};
        characters.push_back(three);
        vector<char> four= {'g','h','i'};
        characters.push_back(four);
        vector<char> five= {'j','k','l'};
        characters.push_back(five);
        vector<char> six= {'m','n','o'};
        characters.push_back(six);
        vector<char> seven= {'p','q','r','s'};
        characters.push_back(seven);
        vector<char> eight= {'t','u','v'};
        characters.push_back(eight);
        vector<char> nine= {'w','x','y','z'};
        characters.push_back(nine);
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.size()==0) return res;
        generate(res, 0, digits, "");
        return res;
    }
};