class Solution {
    int get_max(int a, int b) {return a>b?a:b;}
    int get_max(int a, int b, int c) {return get_max(get_max(a,b),c);}
    
    int find_mid_sum(vector<int>& nums,int mid,int a,int b) {
        int left_sum = INT_MIN;
        int right_sum = INT_MIN;
        int sum = 0;
        
        for (int i=mid; i>=a; i--) {
            sum += nums[i];
            if(sum>left_sum) {
                left_sum = sum;
            }
        }
        
        sum = 0;
        for (int i=mid+1; i<=b; i++) {
            sum += nums[i];
            if(sum>right_sum) {
                right_sum = sum;
            }
        }
        
        return get_max(left_sum,right_sum,(left_sum+right_sum));
    }
    
    int find_sum(vector<int>& nums,int i,int j) {
        if(i==j) return nums[i];
        
        int mid = (i+j) / 2;
        int left_sum = find_sum(nums,i,mid);
        int right_sum = find_sum(nums,mid+1,j);
        int mid_sum = find_mid_sum(nums,mid,i,j);
        
        return get_max(left_sum,right_sum,mid_sum);
    }
    
    public:
    int maxSubArray(vector<int>& nums) {
        return find_sum(nums,0,nums.size()-1);
    }
};