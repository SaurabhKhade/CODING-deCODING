class Solution{
    public:
    int removals(vector<int>& arr, int k){
        int longest = 0;
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size(); i++) {
            int minn = INT_MAX, maxx = INT_MIN;
            for(int j=i; j<arr.size(); j++) {
                minn = min(minn, arr[j]);
                maxx = max(maxx, arr[j]);
                
                if(maxx-minn > k) {
                    break;
                }
                
                longest = max(longest, j-i+1);
            }
        }
        
        return arr.size() - longest;
    }
};