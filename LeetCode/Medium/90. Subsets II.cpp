class Solution {
    bool isEqual(vector<int> &v1, vector<int> &v2) {
        if(v1.size()!=v2.size()) return false;
        for(int i=0; i<v1.size(); i++) {
            if(v1[i] != v2[i]) {
                return false;
            }
        }
        return true;
    }
    bool isNotFound(vector<vector<int>> &ans, vector<int> &v) {
        for(auto el:ans) {
            if(isEqual(el,v)) {
                return false;
            }
        }
        return true;
    }
    void iterate(vector<vector<int>> &ans, vector<int> v, vector<int>& nums, int i) {
        if(i==nums.size()) {
            sort(v.begin(), v.end());
            if(isNotFound(ans, v)) {
                ans.push_back(v);
            }
        }   
        else {
            iterate(ans, v, nums, i+1);
            v.push_back(nums[i]);
            iterate(ans, v, nums, i+1);
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<vector<int>> ans;
       iterate(ans, {}, nums, 0);
        return ans;
    }
};