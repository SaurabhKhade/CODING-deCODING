class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int running = 0;
        for(int i=0; i<nums.size(); i++) {
            running += nums[i];
            result.push_back(running);
        }
        return result;
    }
};