class Solution {
    int queens, board[10][10];
    vector<vector<string>> answers;

    bool isSafe(int row, int col) {
      for(int i=row-1,j=col-1;i>=0 && j>=0;i--) {
        if(board[i][j]) {
          return false;
        }
        j--;
      }
      for(int i=row-1,j=col+1;i>=0 && j<queens;i--) {
        if(board[i][j]) {
          return false;
        }
        j++;
      }
      for(int i=row-1;i>=0;i--) {
        if(board[i][col]) {
          return false;
        }
      }
      return true;
    }

    bool nQueens(int currRow) {
      if(currRow==queens) {
        vector<string> ansRepr;
        for (int i = 0; i<queens; i++) {
          string str = "";
          for(int j = 0; j<queens; j++) {
            if(board[i][j]){
                str+="Q";
            } else {
                str+=".";
            }
          }
          ansRepr.push_back(str);
        }
        answers.push_back(ansRepr);
        return false;
      }
      bool flag = false;
      for (int i = 0; i <queens; i++) {
        if(isSafe(currRow, i) && !flag) {
          board[currRow][i] = true;
          flag = true;
          flag = nQueens(currRow+1);
          if(!flag) board[currRow][i] = false;
        }
        if(flag) break;
      }
      return flag;
    }
    public: 
    vector<vector<string>> solveNQueens(int n) {
        if(n==1) {
            vector<vector<string>> ans = {{"Q"}};
            return ans;
        } else if (n==2 || n==3) {
            vector<vector<string>> ans;
            return ans;
        } else {
            queens = n;
            for (int i = 0; i<queens; i++) {
              for(int j = 0; j<queens; j++) {
                board[i][j] = false;
              }
            }
            nQueens(0);
            return answers;
        }
    }
};