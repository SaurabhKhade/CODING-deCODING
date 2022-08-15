#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
    vector<vector<int>> memory(m, vector<int> (n));
        
        fill(memory[m-1].begin(), memory[m-1].end(), 1);
        for(int i=0; i<m; i++) memory[i][n-1]=1;
        
        for(int i=m-2; i>=0; i--)  for(int j=n-2; j>=0; j--) memory[i][j] = memory[i+1][j] + memory[i][j+1];
        
        return memory[0][0];
}