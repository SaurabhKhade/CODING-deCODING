class Solution{
    public:

    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<int,int> mp1,mp2;
        for(auto &i:A) mp1[i]++;
        for(auto &i:B) mp2[i]++;
        
        if(mp1.size() != mp2.size()) return false;
        
        for(auto &p:mp1) {
            if(p.second != mp2[p.first]) return false;
        }
        
        return true;
    }
};