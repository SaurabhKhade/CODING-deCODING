class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       vector<vector<int>> perms;
        sort(nums.begin(), nums.end());
        
        do perms.push_back(nums); while(next_permutation(nums.begin(), nums.end()));
        
        return perms; 
    }
};