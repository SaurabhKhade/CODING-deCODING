class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9, vector<int>(9)), 
                            column(9, vector<int>(9)), 
                            box(9, vector<int>(9));
        
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j]=='.') continue;
                int n = board[i][j] - '1';
                
                if(row[i][n]) return false;
                row[i][n] = 1;
                if(column[j][n]) return false;
                column[j][n] = 1;
                
                int box_no = (i/3)+(3*(j/3));
                if(box[box_no][n]) return false;
                box[box_no][n] = 1;
            }
        }
        return true;
    }
};