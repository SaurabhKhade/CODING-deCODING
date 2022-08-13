#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long max_till_now = INT_MIN;
    long long max = 0;
    for(int i=0; i<n; i++) {
        max += arr[i];
        if(max_till_now < max) max_till_now = max;
        if(max < 0) max = 0;
    }
    return max_till_now<0?0:max_till_now;
}