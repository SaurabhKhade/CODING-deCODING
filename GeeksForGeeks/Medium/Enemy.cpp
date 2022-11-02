class Solution {
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            vector<int> rows, cols;
            rows.push_back(0);
            cols.push_back(0);
            for(auto &v:enemy) {
                rows.push_back(v[0]);
                cols.push_back(v[1]);
            }
            rows.push_back(n+1);
            cols.push_back(m+1);
            
            int row_gap = 0, col_gap = 0;
            sort(rows.begin(), rows.end());
            sort(cols.begin(), cols.end());
            
            for(int i=1; i<rows.size(); i++) {
                row_gap = max(row_gap, rows[i]-rows[i-1]-1);
                col_gap = max(col_gap, cols[i]-cols[i-1]-1);
            }
            
            return row_gap*col_gap;
        }
};