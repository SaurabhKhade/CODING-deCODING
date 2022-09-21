class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int sum = 0;
        for(auto &el:nums) if(el%2 == 0) sum += el;
        for(auto &query: queries) {
            int val = query[0], i = query[1];
            if(nums[i]%2 == 0) {
                if(val%2 == 0) {
                    sum += val;
                    nums[i] += val;
                } else {
                    sum -= nums[i];
                    nums[i] += val;
                }
            } else {
                if(val%2 == 0) {
                    nums[i] += val;
                } else {
                    sum += (nums[i]+val);
                    nums[i] += val;
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};