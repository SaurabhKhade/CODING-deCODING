class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        
        // save the latest index of element in map and if it is less than k places away from current index, return true 
        for(int i=0; i<nums.size(); i++) {
            if(map.find(nums[i]) != map.end()) {
                if(i-map[nums[i]] <= k)
                    return true;
            }
            map[nums[i]] = i;
        }
        
        return false;
    }
};