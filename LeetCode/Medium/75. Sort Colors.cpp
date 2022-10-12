class Solution {
public:
    void sortColors(vector<int>& nums) {
        int freq[3] = {0,0,0}, k=0;
        
        for(auto &n:nums) freq[n]++;
        for(int i=0; i<3; i++)
            for(int j=0; j<freq[i]; j++)
                nums[k++] = i;
    }
};