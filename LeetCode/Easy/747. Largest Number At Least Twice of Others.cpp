class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = -1, max_i = -1, max_2 = -1, max_2_i = -1;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]>max) {
                max_2 = max;
                max_2_i = max_i;
                max = nums[i];
                max_i = i;
            } else if(nums[i]>max_2) {
                max_2 = nums[i];
                max_2_i = i;
            }
        }
        
        return (max>=2*max_2)?max_i:-1;
    }
};