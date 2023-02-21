class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long val = 0;
        int i=0, j = nums.size()-1;
        while(i<j) val += concat(nums[i++], nums[j--]);
        if(i==j) val += nums[i];
        return val;
    }
    int concat(int x, int y) {
        int z = y;
        while(z) {
            z /= 10;
            x *= 10;
        }
        return x+y;
    }
};