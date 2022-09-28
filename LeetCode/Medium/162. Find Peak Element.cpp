class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while(low != high) {
            int mid = (low+high)/2;
            if(mid==low) {
                if(nums[mid]>nums[mid+1]) 
                    return mid;
                low = mid+1;
            }
            else if(mid==high) {
                if(nums[mid]>nums[mid-1]) 
                    return mid;
                high = mid-1;
            } 
            else {
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) 
                    return mid;
                else if(nums[mid]<nums[mid-1]) 
                    high = mid-1;
                else
                    low = mid+1;
            }
        }
        return low;
    }
};