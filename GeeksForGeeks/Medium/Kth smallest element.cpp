class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=l; i<=r; i++) {
            q.push(arr[i]);
        }
        int sm=0;
        while(k--) {
            sm = q.top();
            q.pop();
        }
        return sm;
    }
};