class Solution {
public:
    bool checkString(string s) {
        bool flag = false;
        for(auto &i:s) {
            if(i=='b') flag = true;
            if(flag && i=='a') return false;
        }
        return true;
    }
};