#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
    int maxx = 0;
    for(int i=0; i<arr.size(); i++) {
        int sum = 0;
        for(int j=i; j<arr.size(); j++) {
            sum += arr[j];
            if(sum==0) maxx = max(maxx, j-i+1);
        }
    }
    return maxx;
}