class Solution {
    vector<int> v,original;
public:
    Solution(vector<int>& nums) {
        v = nums;
        original = nums;
        sort(v.begin(),v.end());
    }
    
    vector<int> reset() {
        return original;
    }
    
    vector<int> shuffle() {
        next_permutation(v.begin(),v.end());
        return v;
    }
};