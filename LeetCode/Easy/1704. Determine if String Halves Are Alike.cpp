class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        unordered_map<char,int> map = {
            {'a',1},
            {'e',1},
            {'i',1},
            {'o',1},
            {'u',1},
            {'A',1},
            {'E',1},
            {'I',1},
            {'O',1},
            {'U',1},
        };
        
        int cnt = 0;
        for(int i=0; i<n/2; i++) {
            if(map[s[i]]) cnt++;
        }
        for(int i=n/2; i<n; i++) {
            if(map[s[i]]) cnt--;
        }
        return cnt==0;
    }
};