#include <bits/stdc++.h> 

void subsets(vector<int> &num, int ind, vector<int> &set, vector<int> &v) {
    if(ind==num.size()) {
        v.push_back(accumulate(set.begin(),set.end(),0));
        return;
    }
    set.push_back(num[ind]);
    subsets(num, ind+1, set, v);
    set.pop_back();
    subsets(num, ind+1, set, v);
}

vector<int> subsetSum(vector<int> &num) {
    vector<int> v, set;
    subsets(num,0,set,v);
    sort(v.begin(), v.end());
    return v;
}