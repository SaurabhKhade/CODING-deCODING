#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    if(target < mat[0][0] || target>mat[m-1][n-1]) return false;
    vector<int>row;
    for(int i=0; i<m; i++) {
        if(mat[i][0] <= target) row = mat[i];
        else break;
    }
    if(target>row[n-1]) return false;
    for(auto &i:row) if(i==target) return true;
    return false;
}