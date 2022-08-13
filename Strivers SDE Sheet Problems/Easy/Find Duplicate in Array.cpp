#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
    vector<int> cnt(n);
    for(auto &i:arr) {
        cnt[i]++;
        if(cnt[i]>1) return i;
    }
    return 0;
}
