class Solution {
public:
    double myPow(double x, int n) {
        double ans= 1;
        unsigned raise = abs(n);
        if(x==1) return 1;
        if(x==-1) {
            if(raise%2==0) return 1;
            else return -1;
        }
        if(n<0) {
            for(int i=0; i<raise; i++) {
                ans /= x;
                if(ans == 0) break;
            }
        } else for(int i=0; i<raise; i++) ans *= x;
        
        return ans;
    }
};