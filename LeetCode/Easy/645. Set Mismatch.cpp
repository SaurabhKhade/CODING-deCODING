class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> counts(nums.size()+1);
        for(int &i:nums) 
            counts[i]++;
        int missing=0,duplicate=0;
        for(int i=1; i<=nums.size(); i++) {
            if(counts[i]==0) missing = i;
            if(counts[i]==2) duplicate = i;
            if(missing && duplicate) break;
        }
        return {duplicate,missing};
    }
};