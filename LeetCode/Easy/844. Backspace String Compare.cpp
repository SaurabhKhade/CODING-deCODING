class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss,ts;
        for(auto chr:s){
            if(chr != '#') ss.push(chr);
            else if(!ss.empty()) ss.pop();
        }
        for(auto chr:t){
            if(chr != '#') ts.push(chr);
            else if(!ts.empty()) ts.pop();
        }
        return ss == ts;
    }
};