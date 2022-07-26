class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangles;
        if(numRows==0) return triangles;
        vector<int> first = {1};
        triangles.push_back(first);
        
        for(int i=1; i<numRows; i++) {
            vector<int> next = {1};
            
            for(int j=1; j<i; j++) {
                next.push_back(triangles[i-1][j]+triangles[i-1][j-1]);
            }
            
            next.push_back(1);
            triangles.push_back(next);
        }
        
        return triangles;
    }
};