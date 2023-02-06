class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int currentXOR = 0;
        vector<int> ans(pref.size());
        for(int i=0; i<pref.size(); i++) {
            ans[i] = pref[i]^currentXOR;
            currentXOR ^= ans[i];
        }
        return ans;
    }
};