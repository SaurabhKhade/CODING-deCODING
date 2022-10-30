#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int m = 0, r = 0;
    int cnt[n];
    memset(cnt,0,sizeof(cnt));
    for(auto &i:arr) {
        cnt[i-1]++;
    }
    for(int i=0; i<n; i++) {
        if(cnt[i]==0) m = i+1;
        else if(cnt[i]==2) r = i+1;
    }
    
    return {m,r};
}
