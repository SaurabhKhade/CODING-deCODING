class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> dis(n);
        int sm_dis = INT_MAX, sm_i = 0;
        for(int i=0; i<n; i++) {
            dis[i] = abs(arr[i]-x);
            if(dis[i]<sm_dis) {
                sm_dis = dis[i];
                sm_i = i;
            }
        }
        vector<int> ans = {arr[sm_i]};
        int l = sm_i-1, r = sm_i+1;
        while(k-->1) {
            if(l<0) ans.push_back(arr[r++]);
            else if(r>=n) ans.push_back(arr[l--]);
            else {
                if(dis[l]<=dis[r]) ans.push_back(arr[l--]);
                else ans.push_back(arr[r++]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};