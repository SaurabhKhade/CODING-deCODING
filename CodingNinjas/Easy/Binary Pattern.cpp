#include <bits/stdc++.h> 
void printPatt(int n) {
    bool flag = true;
    for(int i=n; i>0; i--) {
        if(flag) {
            for(int j=0; j<i; j++) cout<<1;
        }
        else {
            for(int j=0; j<i; j++) cout<<0;
        }
        flag ^= 1;
        cout<<endl;
    }
}