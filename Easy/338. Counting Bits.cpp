class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits(n+1);
        bits[0] = 0;
        for(int i=1; i<=n; i++) {
            bits[i] = bits[i/2] + i%2;
        }
        return bits;
    }
};