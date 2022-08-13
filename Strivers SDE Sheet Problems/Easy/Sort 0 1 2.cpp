#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    vector<int> cnts(3);
    for(int i=0; i<n; i++) cnts[arr[i]]++;
    int index_add = 0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<cnts[i]; j++) arr[index_add + j] = i;
        index_add += cnts[i];
    }   
}