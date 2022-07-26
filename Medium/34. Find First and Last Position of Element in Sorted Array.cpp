class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> pos={-1,-1};
        if(find(nums.begin(), nums.end(), target)!=nums.end()) {
            pos[0] = distance(nums.begin(), find(nums.begin(), nums.end(), target));
            pos[1] = distance(nums.begin(), find(nums.rbegin(), nums.rend(), target));
        } 
        return pos;
    }
};