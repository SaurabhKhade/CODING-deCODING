#include <bits/stdc++.h> 

void updateMatrix(vector<vector<int>> &matrix, int x, int y) {
//     number of rows in matrix
    int rows = matrix.size();
//     number of columns in matrix  
    int columns = matrix[0].size();
    
//     set zero to whole column at y'th index
    for(int i=x+1; i<rows; i++) {
        matrix[i][y] = 0;
    }
    for(int i=x-1; i>=0; i--) {
        matrix[i][y] = 0;
    }
    
//     set zero to whole row at x'th index
    for(int i=y+1; i<columns; i++) {
        matrix[x][i] = 0;
    }
    for(int i=y-1; i>=0; i--) {
        matrix[x][i] = 0;
    }
}

void setZeros(vector<vector<int>> &matrix)
{
    int rows = matrix.size();  
    int columns = matrix[0].size();
//     coordinates of all zeros in matrix
    vector<vector<int>> zeros;
    
//     find all coordinates having zeros
    for(int i =0; i<rows; i++) {
        for(int j=0; j<columns; j++) {
            if(matrix[i][j]==0) {
                vector<int> pair = {i,j};
                zeros.push_back(pair);
            }
        }
    }
    
//     now update the matrix for all zeros
    for(int i=0; i<zeros.size(); i++) {
        updateMatrix(matrix,zeros[i][0],zeros[i][1]);
    }
}