class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int SIZE = grid.size();
        vector<vector<int>> new_grid;
        
        for(int i=0; i<SIZE-2; i++) {
            vector<int> row;
            for(int j=0; j<SIZE-2; j++) {
                int max = 0;
                for(int k=i; k<i+3; k++) {
                    for(int l=j; l<j+3; l++) {
                        if(grid[k][l]>max) max = grid[k][l];
                    }
                }
                row.push_back(max);
            }
            new_grid.push_back(row);
        }
        return new_grid;
    }
};