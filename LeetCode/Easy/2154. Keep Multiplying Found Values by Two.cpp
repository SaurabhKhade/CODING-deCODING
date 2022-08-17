class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        auto itr = nums.begin();
        while(true) {
            itr = find(itr,nums.end(),original);
            if(itr == nums.end()) return original;
            original *= 2;
        }
    }
};