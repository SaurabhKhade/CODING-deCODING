#include <bits/stdc++.h> 

bool compare(vector<int> v1, vector<int> v2) {
    return v1[0]==v2[0]? v1[1]<v2[1] : v1[0]<v2[0];
}

vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> pairs;
    for(int i=0; i<arr.size(); i++)
        for(int j=i+1; j<arr.size(); j++)
            if(arr[i]+arr[j]==s) 
                pairs.push_back({min(arr[i],arr[j]),max(arr[i],arr[j])});
    
    sort(pairs.begin(),pairs.end(),compare);
    return pairs;
}