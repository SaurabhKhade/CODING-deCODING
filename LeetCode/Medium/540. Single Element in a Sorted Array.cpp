class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0, j=nums.size()-1, n =nums.size()-1;
        while(i<j) {
            int m = (i+j)/2;
            if(m==1 && nums[0] != nums[1]) return nums[0];
            if(m==n-1 && nums[n] != nums[n-1]) return nums[n];
            if(nums[m] != nums[m-1] && nums[m]!=nums[m+1]) return nums[m];
            if(m%2==0) {
                if(nums[m]==nums[m-1]) {
                    j = m;
                } else {
                    i = m;
                }
            } else {
                if(nums[m]==nums[m-1]) {
                    i = m;
                } else {
                    j = m;
                }
            }
        }
        return nums[i];
    }
};