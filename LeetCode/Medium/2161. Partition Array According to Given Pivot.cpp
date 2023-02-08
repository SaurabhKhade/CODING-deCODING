class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size(), cnt = 0;
        vector<int> less,more,ans;
        for(auto &i:nums) {
            if(i==pivot) cnt++;
            else if(i<pivot) less.push_back(i);
            else more.push_back(i);
        }
        for(int i=0; i<less.size(); i++) ans.push_back(less[i]);
        for(int i=0; i<cnt; i++) ans.push_back(pivot);
        for(int i=0; i<more.size(); i++) ans.push_back(more[i]);

        return ans;
    }
};