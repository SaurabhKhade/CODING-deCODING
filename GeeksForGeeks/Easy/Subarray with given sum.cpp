class Solution
{
    public:
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        if(s==0) return {-1};
        int slow = 0, fast = -1;
        long long sum = 0;
        bool found = false;
        while(fast<n) {
            if(sum == s) {
                found = true;
                break;
            } else if(sum < s) {
                sum += arr[++fast];
            } else {
                sum -= arr[slow++];
            }
        }
        
        if(found) return {slow+1,fast+1};
        return {-1};
    }
};