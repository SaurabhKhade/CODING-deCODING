#include <bits/stdc++.h> 
bool compare(vector<int> &a, vector<int> &b) {
    if(a[0]==b[0]) 
        return a[1]>b[1];
    return a[0]<b[0];
}

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end(),compare);
    vector<vector<int>> res;
    
    int x = intervals[0][0], y = intervals[0][1];
    bool flag = true;
    for(auto &pair:intervals) {
        if(flag) {flag=false;continue;}
        int x1 = pair[0], y1 = pair[1];
        if(x<=y1 && y>=x1) x = min(x,x1), y = max(y,y1);
        else {
            res.push_back({x,y});
            x = x1, y = y1;
        }
    }
    
    int size = res.size();
    if(size==0 || (res[size-1][0]!=x && res[size-1][1]!=y)) res.push_back({x,y});
    
    return res;
}