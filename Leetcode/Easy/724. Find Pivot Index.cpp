class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        int total = 0, left_sum=0;
        
        for(int i=0; i<size; i++)
            total += nums[i];
        
        for(int i=0; i<size; i++) {
            total -= nums[i];
            
            if(left_sum == total) {
                return i;
            }
            
            left_sum += nums[i];
        }
        
        return -1;
    }
};