class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        int i=n-1, j=0, k=n-1;
        while(j<=k) {
            if(abs(nums[k]) > abs(nums[j])) {
                v[i--] = nums[k]*nums[k];
                k--;
            } else {
                v[i--] = nums[j]*nums[j];
                j++;
            }
        }
        return v;
    }
};