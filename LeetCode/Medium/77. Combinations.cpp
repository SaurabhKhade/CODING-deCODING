class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> curr;
        helper(ans, curr, n, k, 1);
        return ans;
    }
    
    void helper(vector<vector<int>> &ans, vector<int> &curr, int &n, int &k, int i) {
        if(curr.size()==k) {
            ans.push_back(curr);
            return;
        }
        for(int j=i; j<=n; j++) {
            curr.push_back(j);
            helper(ans, curr, n, k, j+1);
            curr.pop_back();
        }
    }
};