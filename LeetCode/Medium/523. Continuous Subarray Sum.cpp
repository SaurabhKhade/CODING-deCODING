class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map {{0,-1}};
        int mod_sum = 0;
        
        for(int i=0; i<nums.size(); i++) {
            mod_sum = (mod_sum+nums[i])%k;
            if(map.find(mod_sum) != map.end()) {
                if(i-map[mod_sum]>1) {
                    return true;
                }
            } else {
                map[mod_sum] = i;
            }
        }
        
        return false;
    }
};