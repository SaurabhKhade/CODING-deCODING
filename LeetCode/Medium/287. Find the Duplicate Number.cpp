class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int MAX = 1e5+1;
        int cnt[MAX];
        memset(cnt,0,sizeof(cnt));
        for(auto &i:nums) {
            cnt[i]++;
            if(cnt[i]==2) return i;
        }
        return -1;
    }
};