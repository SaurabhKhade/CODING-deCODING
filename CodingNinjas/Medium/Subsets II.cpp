#include <bits/stdc++.h> 

void findSubsets(vector<int> &arr, int n, int ind, vector<vector<int>> &subsets, vector<int> &subset) {
    subsets.push_back(subset);
    
    for(int i=ind; i<n; i++) {
        if(i>ind && arr[i]==arr[i-1]) continue;
        
        subset.push_back(arr[i]);
        findSubsets(arr, n, i+1, subsets, subset);
        subset.pop_back();
    }
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> subsets;
    vector<int> subset;
    findSubsets(arr, n, 0, subsets, subset);
    return subsets;
}