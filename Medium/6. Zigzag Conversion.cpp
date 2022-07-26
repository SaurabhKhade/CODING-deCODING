class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> rows;
        for(int i=0; i<numRows; i++) {
            vector<char> row;
            rows.push_back(row);
        }
        int incr=1, currRow = 0;
        for(auto i:s) {
            rows[currRow].push_back(i);
            currRow+=incr;
            if(currRow>=numRows-1) {
                incr = -1;
            } else if(currRow<=0) {
                incr = 1;
            }
            
            if(currRow<0) currRow=0;
            else if(currRow >= numRows) currRow = numRows-1;
        }
        
        string result = "";
        for(auto row:rows) {
            for(auto chr:row) {
                result+=chr;
            }
        }
        
        return result;
    }
};