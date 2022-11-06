#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    vector<int> cnts;
	unordered_map<int,int> mp;
    int uniques = 0;
    for(int i=0; i<k; i++) {
        mp[arr[i]]++;
        if(mp[arr[i]]==1) {
            uniques++;
        }
    }
    cnts.push_back(uniques);
    for(int i=0, j=k; j<arr.size(); j++, i++) {
        mp[arr[i]]--;
        if(mp[arr[i]]==0) uniques--;
        mp[arr[j]]++;
        if(mp[arr[j]]==1) uniques++;
        cnts.push_back(uniques);
    }
    return cnts;
}
