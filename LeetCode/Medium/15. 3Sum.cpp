class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        set<vector<int>>s;
        vector<int>v(3);
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size()-1;i++)
        {
            int x=-1*nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                if(mp.find(x-nums[j])!=mp.end())
                {
                    v[0]=nums[i],v[1]=nums[j],v[2]=x-nums[j];
                    sort(v.begin(),v.end());
                    s.insert(v);
                }
            }
            mp[nums[i]]=1;
        }
        for(auto x : s)
            res.push_back(x);
        return res;
    }
};