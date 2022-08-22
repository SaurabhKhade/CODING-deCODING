class Solution {
public:
    bool isPowerOfThree(int n) {
        long nn = n, x=1;
        while(x<nn) x*=3;
        if(x==nn) return true;
        return false;
    }
};