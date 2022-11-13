class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int min_p, max_p;
        int i = 0, j = nums.size()-1, mid;
        while(i<=j) {
            mid = (i+j)/2;
            if(nums[mid]==target) break;
            else if(nums[mid]<target) i = mid+1;
            else j = mid-1;
        }
        if(i>j) return {-1,-1};
        i = mid;
        while(i>= 0 && nums[i] == target) {
            i--;
        }
        j = mid;
        while(j<nums.size() && nums[j] == target) {
            j++;
        }
        return {i+1,j-1};
    }
};