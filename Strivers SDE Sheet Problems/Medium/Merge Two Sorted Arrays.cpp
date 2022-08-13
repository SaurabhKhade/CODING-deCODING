#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int i1 = 0, i2 = 0, i=0;
    vector<int> res(m+n);
    while(i1<m && i2<n) res[i++] = arr1[i1]<arr2[i2]?arr1[i1++]:arr2[i2++];
    while(i1 < m) res[i++] = arr1[i1++];
    while(i2 < n) res[i++] = arr2[i2++];
    return res;
}