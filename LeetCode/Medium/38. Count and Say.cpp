class Solution {
    string count(string say) {
        string newSay;
        int cnt = 1;
        char chr = say[0]; 
        for(int i=1; i<say.size(); i++) {
            if(say[i]==chr) {
                cnt++;
            } else {
                newSay += to_string(cnt)+chr;
                cnt = 1;
                chr = say[i];
            }
        }
        newSay += to_string(cnt)+chr;
        return newSay;
    }
public:
    string countAndSay(int n) {
        vector<string> dp(n+1);
        string say="1";
        if(n==1) return say;
        else {
            for(int i=2; i<=n; i++) {
                say = count(say);
            }
        }
        return say;
    }
};