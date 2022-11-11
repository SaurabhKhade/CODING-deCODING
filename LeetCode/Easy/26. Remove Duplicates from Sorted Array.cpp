class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=0, fast =1;
        for(; fast<nums.size(); fast++) {
            if(nums[slow]!=nums[fast]) {
                nums[++slow] = nums[fast];
            }
        }
        return slow+1;
    }
};