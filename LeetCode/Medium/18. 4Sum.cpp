class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<long long> nums2(n);
        for(int i=0; i<n; i++) nums2[i] = (long long)nums[i];
        set<vector<int>> ans;
        for(int i=0; i<n; i++) {
            for(int j=i+3; j<n; j++) {
                int l = i+1, m = j-1;
                cout<<i<<" "<<l<<" "<<m<<" "<<j<<endl;
                while(l<m) {
                    long long int sum = nums2[i]+nums2[l]+nums2[m]+nums2[j];
                    if(sum == target) {
                        ans.insert({nums[i],nums[l],nums[m],nums[j]});
                        m--;
                    } else if(sum>target) {
                        m--;
                    } else {
                        l++;
                    }
                }
            }
        }
        vector<vector<int>> ans2(ans.begin(),ans.end());
        return ans2;
    }
};