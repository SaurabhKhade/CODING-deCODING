class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> steps(n);
        queue<pair<int,int>> q;
        for(int i=1; i<n; i++) {
            steps[i] = INT_MAX;
        }
        q.push({nums[0],1});
        for(int i=1; i<n; i++) {
            if(q.empty()) steps[i] = min(steps[i],steps[i-1]+1);
            else {
                steps[i] = min(steps[i],q.front().second);
            }
            while(!q.empty() && q.front().first <= i) q.pop();
            q.push({i+nums[i],steps[i]+1});
        }
        return steps[n-1];
    }
};