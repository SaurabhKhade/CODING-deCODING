#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    int cnt = 0, xor_ = 0;
    unordered_map<int,int> map;
    for(auto &el:arr) {
        xor_ ^= el;
        if(xor_ == x) cnt++;
        if(map[xor_^x]) cnt += map[xor_^x];
        map[xor_]++;
    }
    return cnt;
}