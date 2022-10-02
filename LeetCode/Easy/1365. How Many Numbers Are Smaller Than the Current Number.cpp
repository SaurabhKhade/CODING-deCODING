class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> n2 = nums;
        sort(n2.begin(), n2.end());
        vector<int> occ(101,-1);
        for(auto i=0; i<n2.size(); i++) {
            if(occ[n2[i]] == -1) occ[n2[i]] = i;
        }
        for(auto i=0; i<nums.size(); i++) {
            nums[i] = occ[nums[i]];
        }
        return nums;
    }
};