class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        vector<int> v(n);
        for(auto &i:array) v[i-1] = 1;
        for(int i=0; i<n; i++) if(!v[i]) return i+1;
        return -1;
    }
};