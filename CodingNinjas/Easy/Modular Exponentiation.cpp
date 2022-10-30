#include <bits/stdc++.h> 
int modularExponentiation(long x, int n, int m) {
    if(x==1) return 1;
    long extra=1;
    
    while(n>1) {
        if(n%2 != 0)
            n--, extra = (extra*x)%m;
        else
            n/=2, x = (x*x)%m;
    }
    return (x*extra)%m;
}