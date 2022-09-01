class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int status[201];
        memset(status,0,sizeof(status));
        int cnt = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]-2*diff>=0 && status[nums[i]-diff] && status[nums[i]-2*diff]) cnt++;
            status[nums[i]] = 1;
        }
        return cnt;
    }
};