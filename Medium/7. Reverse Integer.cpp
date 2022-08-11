class Solution {
public:
    int reverse(int x) {
        bool isNeg = x<0;
        long long xx = x;
        if(isNeg) xx = -xx;
        long long ans = 0;
        string rev="";
        long long limit_l = -1*pow(2,31), limit_r = pow(2,31)-1;

        while(xx>0) {
            int rem = xx%10;
            rev += to_string(rem);
            xx = xx/10;
        }
        for(auto i:rev) ans = ans*10+(i-'0');
        if(isNeg) ans = -ans;
        if(ans<limit_l || ans>limit_r) return 0;
        return ans;
    }
};