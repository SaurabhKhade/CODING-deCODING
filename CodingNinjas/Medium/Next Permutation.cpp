#include <bits/stdc++.h> 

bool isBigger(vector<int> &permutation, vector<int> &prev) {
    for(int i=0; i<prev.size(); i++) {
        if(permutation[i] == prev[i]) continue;
        else if(permutation[i]>prev[i]) return true;
        else return false;
    }
    return false;
}

bool isEqual(vector<int> &permutation, vector<int> &reverse) {
    for(int i=0; i<reverse.size(); i++) {
        if(permutation[i] == reverse[i]) continue;
        else return false;
    }
    return true;
}

vector<int> nextPermutation(vector<int> &permutation, int n) {
    if(n==1) return permutation;
    
    vector<int> prev,reverse(n), straight(n);
    for(int i=0; i<n; i++) straight[i] = i+1, reverse[n-i-1] = i+1;
    
    do {
        if(isEqual(permutation,reverse)) return straight;
        prev = permutation;
        next_permutation(permutation.begin(),permutation.end());
    } while(!isBigger(permutation,prev));
    
    return permutation;
}