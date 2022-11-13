class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, m = matrix.size(), n = matrix[0].size();
        if(target>matrix[m-1][n-1] || target<matrix[0][0]) return false;
        while(target>matrix[i][n-1]) i++;
        int j = 0, k = n-1, mid;
        while(j<=k) {
            mid = (j+k)/2;
            if(matrix[i][mid]==target) return true;
            else if(matrix[i][mid] < target) j = mid+1;
            else k = mid-1;
        }
        return false;
    }
};