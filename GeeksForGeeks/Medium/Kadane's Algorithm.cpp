class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        long long sum = 0, max_sum = INT_MIN;
        
        for(int i=0; i<n; i++) {
            sum += arr[i];
            max_sum = max(max_sum,sum);
            if(sum<0) {
                sum = 0;
            }
        }
        
        return max_sum;
    }
};