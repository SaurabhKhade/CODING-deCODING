class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> row_maxes, col_maxes;
        int SIZE = grid.size();
        for(int i=0; i<SIZE; i++) {
            int row_max = 0, col_max = 0;
            for(int j=0; j<SIZE; j++) {
                if(grid[i][j] > row_max) row_max = grid[i][j];
                if(grid[j][i] > col_max) col_max = grid[j][i];
            }
            row_maxes.push_back(row_max);
            col_maxes.push_back(col_max);
        }
        
        int sum = 0;
        for(int i=0; i<SIZE; i++) {
            for(int j=0; j<SIZE; j++) {
                sum += min(row_maxes[i], col_maxes[j]) - grid[i][j];
            }
        }
        
        return sum;
    }
};