#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    unordered_map<int,int> mp;
    for(auto &i:arr) {
        mp[i]++;
        if(mp[i]==2) return i;
    }
    return -1;
}