class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k%size;
        vector<int> sol(size);
        
        for(int i = 0; i<size; i++) {
            sol[(i+k)%size] = nums[i];
        }
        
        nums = sol;
    }
};