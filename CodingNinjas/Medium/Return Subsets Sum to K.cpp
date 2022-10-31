void findSubsets(vector<int> &arr, int n, int k, int i, vector<int> &subset, vector<vector<int>> &subsets) {
    if(accumulate(subset.begin(),subset.end(),0) == k) {
        subsets.push_back(subset);
    }
    
    for(int j=i; j<n; j++) {
        subset.push_back(arr[j]);
        findSubsets(arr, n, k, j+1, subset, subsets);
        subset.pop_back();
    }
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> &arr, int n, int k) {
    vector<vector<int>> subsets;
    vector<int> subset;
    findSubsets(arr, n, k, 0, subset, subsets);
    return subsets;
}