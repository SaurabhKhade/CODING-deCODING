#include <bits/stdc++.h> 
string fourSum(vector<int> nums, int target, int n) {
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int start=j+1;
            int end=n-1;
            while(start<end) {
                long long int sum=(long long int)nums[i]+nums[j]+nums[start]+nums[end];
                if(sum>target) end--;
                else if(sum<target) start++;
                else return "Yes";
            }
            while(j<n-1 && nums[j]==nums[j+1]) j++;
        }
        while(i<n-1 && nums[i]==nums[i+1]) i++;
    }
    return "No";
}