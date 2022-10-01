class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        vector<int> states (n,0);
        for(int i=0; i<n; i++) {
            if(dominoes[i]=='.') continue;
            else if(dominoes[i]=='L') {
                states[i] = -1;
                for(int j=i-1, k=-2; j>=0 && dominoes[j]=='.'; j--, k--) {
                    int power = states[j]+k;
                    if(states[j] == 0) states[j] = k;
                    else if(power > 0) states[j] = k;
                    else if(power == 0) {
                        states[j] = 0;
                        break;
                    } else break;
                }
            } else {
                states[i] = 1;
                for(int j=i+1, k=2; j<n && dominoes[j]=='.'; j++, k++) {
                    states[j] = k;
                }
            }
        }
        string res;
        for(auto &s:states) res += (s>0?'R':(s<0?'L':'.'));
        return res;
    }
};