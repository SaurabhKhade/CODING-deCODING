class Solution {
    void generate(int open, int close, string curr, int n, vector<string> &res) {
        if(open==n && close==n) {
            res.push_back(curr);
            return;
        } 
        
        if(open<n) generate(open+1, close, curr+"(", n, res);
        if(open>close)  generate(open, close+1, curr+")", n, res);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(0, 0, "", n, result);
        return result;
    }
};