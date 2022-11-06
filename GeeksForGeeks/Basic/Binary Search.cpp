class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int l=0, r=n-1, m;
        while(l<=r) {
            m = (l+r)/2;
            if(arr[m]==k) return m;
            else if(arr[m]<k) l = m+1;
            else r = m-1;
        }
        
        return -1;
    }
};