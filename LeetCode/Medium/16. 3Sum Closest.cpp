class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int close = INT_MAX, n=nums.size(), res;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++) {
            int req = target - nums[i];
            int j=i+1, k = n-1;
            while(j<k) {
                int sum = nums[j] + nums[k];
                if(sum == req) return target;
                else if(sum<req) {
                    if(abs(req-sum)<close) {
                        close = abs(req-sum);
                        res = nums[i]+nums[j]+nums[k];
                    }
                    j++;
                } else {
                    if(abs(req-sum)<close) {
                        close = abs(req-sum);
                        res = nums[i]+nums[j]+nums[k];
                    }
                    k--;
                }
                
            }
        }
        return res;
    }
};