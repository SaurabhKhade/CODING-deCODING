class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> memory(nums.size(), 1);
        int max = 1;
        for(int i=1; i<nums.size(); i++) {
            for(int j=0; j<i; j++) {
                if(nums[j]<nums[i] && memory[j]+1 > memory[i]) {
                    memory[i] = memory[j]+1;
                    if(max < memory[i]) max = memory[i];
                }
            }
        }
        return max;
    }
};