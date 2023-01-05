#include<bits/stdc++.h>

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	unordered_map<int,int> map;
    vector<pair<int,int>> ans;
    for(auto &i:arr) {
        if(map[target-i]) {
            map[target-i]--;
            map[i]--;
            ans.push_back({target-i,i});
        }
        map[i]++;
    }
    if(ans.size()==0) ans.push_back({-1,-1});
    return ans;
}