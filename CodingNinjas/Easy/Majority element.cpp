#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	unordered_map<int,int> map;
    for(int i=0; i<n; i++) map[arr[i]]++;
    int majority = n/2;
    for(auto &i:map) if(i.second>majority) return i.first;
    return -1;
}