class Solution {
public:
    int titleToNumber(string cT) {
        int ans = 0;
        for(auto &chr:cT) 
            ans = ans*26+(chr-'A'+1);
        return ans;
    }
};