class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int max1 = 0, max2 = 0;
        for(auto &el:nums) {
            if(el>max1) max2 = max1, max1 = el;
            else if(el>max2) max2 = el;
        }
        return (max1-1) * (max2-1);
    }
};