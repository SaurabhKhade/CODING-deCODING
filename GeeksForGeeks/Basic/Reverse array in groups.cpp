class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int i=0, j=k;
        while(j<n) {
            reverse(arr.begin()+i, arr.begin()+j);
            i = j;
            j += k;
        }
        reverse(arr.begin()+i, arr.end());
    }
};