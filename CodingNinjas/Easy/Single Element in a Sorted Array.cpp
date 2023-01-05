#include <bits/stdc++.h> 
int uniqueElement(vector<int> arr, int n)
{
	for(int i=0; i<n; i+=2) {
        if(arr[i] != arr[i+1]) return arr[i];
    }
    return arr[n-1];
}
