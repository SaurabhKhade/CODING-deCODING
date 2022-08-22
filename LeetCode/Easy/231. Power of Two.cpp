class Solution {
public:
    bool isPowerOfTwo(int n) {
        long nn = n, x=1;
        while(x<nn) x*=2;
        if(x==nn) return true;
        return false;
    }
};