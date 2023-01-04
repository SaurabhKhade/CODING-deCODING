#include <bits/stdc++.h> 
vector<int> minHeap(int n, vector<vector<int>>& q) {
    priority_queue<int,vector<int>,greater<int>> pq;
    vector<int> vec;
    for(auto &v: q) {
        if(v[0]==0) pq.push(v[1]);
        else {
            vec.push_back(pq.top());
            pq.pop();
        }
    }
    return vec;
}
