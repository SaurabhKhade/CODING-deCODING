class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string nn = to_string(n);
        sort(nn.begin(),nn.end());
        vector<string> powers(30);
        for(int i=0; i<30; i++) {
            string t = to_string((int)pow(2,i));
            sort(t.begin(), t.end());
            powers[i] = t;
        }
        for(int i=0; i<30;i++) if(powers[i]==nn) return true;
        return false;
    }
};