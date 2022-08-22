class Solution {
public:
    bool isPowerOfFour(int n) {
        long nn = n, x=1;
        while(x<nn) x*=4;
        if(x==nn) return true;
        return false;
    }
};