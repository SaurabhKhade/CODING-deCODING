#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> matrix;
    vector<long long int> firstRow = {1};
    matrix.push_back(firstRow);
    if(n==1) {
        return matrix;
    }
    for(int i=1; i<n; i++) {
        vector<long long int> row = {1};
        vector<long long int> prevRow = matrix[i-1];
        for(int j=0; j<prevRow.size()-1; j++) {
            row.push_back(prevRow[j]+prevRow[j+1]);
        }
        row.push_back(1);
        matrix.push_back(row);
    }
    return matrix;
}