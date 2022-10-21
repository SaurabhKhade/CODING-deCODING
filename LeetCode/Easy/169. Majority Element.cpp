class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // // Constant space solution
        // sort(nums.begin(), nums.end());
        // return nums[nums.size()/2];
        
        unordered_map<int,int> map;
        for(auto &n:nums) {
            map[n]++;
            if(map[n]>nums.size()/2) return n;
        }
        return -1;
    }
};