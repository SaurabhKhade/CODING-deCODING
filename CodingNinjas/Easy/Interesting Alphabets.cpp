#include <bits/stdc++.h> 
vector<vector<char>> interestingPattern(int n)
{
    vector<vector<char>> v;
    vector<char> _v;
    for(int i=n-1; i>=0; i--) {
        _v.insert(_v.begin(),'A'+i);
        v.push_back(_v);
    }
    return v;
}
