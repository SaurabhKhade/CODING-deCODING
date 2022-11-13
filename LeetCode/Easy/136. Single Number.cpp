class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = 0;
        for(auto &i:nums) n = n xor i;
        return n;
    }
};