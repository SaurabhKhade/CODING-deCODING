class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0, fast = 0;
        for(int i=0; i<nums.size(); i++) {
            nums[slow] = nums[fast];
            if(nums[i] != 0) {
                slow++;
            }
            fast++;
        }
        for(int i=slow; i<nums.size(); i++) {
            nums[i] = 0;
        }
        
    }
};