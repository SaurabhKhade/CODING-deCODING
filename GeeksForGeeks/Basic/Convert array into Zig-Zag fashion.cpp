class Solution {
  public:
    void zigZag(int arr[], int n) {
        bool less = true;
        for(int i=0; i<n-1; i++) {
            if(less) {
                if(arr[i]>arr[i+1]) {
                    swap(arr[i],arr[i+1]);
                }
            } else {
                if(arr[i]<arr[i+1]) {
                    swap(arr[i],arr[i+1]);
                }
            }
            less = !less;
        }
    }
};