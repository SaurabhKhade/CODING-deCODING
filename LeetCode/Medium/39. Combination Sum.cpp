class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        helper(candidates, target, v, 0, 0, ans);
        return ans;
    }

    void helper(vector<int>& candidates, int target, vector<int>& current, int sum, int i, vector<vector<int>> &ans) {
      if(sum==target) {
        ans.push_back(current);
        return;
      }
      if(sum > target) return;
      for(int j=i; j<candidates.size(); j++) {
        current.push_back(candidates[j]);
        helper(candidates, target, current, sum+candidates[j], j, ans);
        current.pop_back();
      }
    }
};