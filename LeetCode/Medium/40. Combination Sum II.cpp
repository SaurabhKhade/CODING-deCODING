class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
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
      if(i>=candidates.size()) return;
      current.push_back(candidates[i]);
      helper(candidates, target, current, sum + candidates[i], i+1, ans);
      current.pop_back();
      while(i<candidates.size()-1 && candidates[i]==candidates[i+1]) i++;
      helper(candidates, target, current, sum, i+1, ans);
    }
};