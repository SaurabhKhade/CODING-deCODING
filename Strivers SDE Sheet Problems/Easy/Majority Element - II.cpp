#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    unordered_map<int,int> map;
    for(auto &i:arr) map[i]++;
    vector<int> ans;
    for(auto &pair:map) 
        if(pair.second>arr.size()/3) 
            ans.push_back(pair.first);
    return ans;
}