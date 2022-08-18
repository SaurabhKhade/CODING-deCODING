#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    vector<int> memory(n,1);
    int maxi = 1,curr=1;
    
    for(int i=1; i<n; i++) {
        if(arr[i]==arr[i-1]) continue;
        else if(arr[i]==arr[i-1]+1) {
            curr++;
            maxi = max(maxi, curr);
        } else {
            curr = 1;
        }
    }
    
    return maxi;
}