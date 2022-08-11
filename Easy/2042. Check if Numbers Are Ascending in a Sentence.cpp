class Solution {
public:
    bool areNumbersAscending(string str) {
        int last = -1;
        for(unsigned i=0; i<str.size(); i++) {
            if(str[i]>='0'&& str[i]<='9') {
                int j = i;
                while(str[j]!=' ' && j<str.size()) j++;
                
                int n = stoi(str.substr(i,j-i));
                if(n <= last) return false;
                else {
                    last = n;
                    i = j;
                }
            }
        }
        return true;
    }
};