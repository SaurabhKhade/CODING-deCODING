class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        vector<int> series(n+2,0);
        series[1] = series[2] = 1;
        for(int i=3; i<=n; i++) {
            series[i] = series[i-1]+series[i-2]+series[i-3];
        }
        return series[n];
    }
};