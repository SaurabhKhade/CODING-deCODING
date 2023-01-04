#include <bits/stdc++.h> 
vector<string> printPatt(int n)
{
    vector<string> v;
    string s;
    for(int i=0; i<n; i++) {
        s+="*";
        v.push_back(s);
    }
    reverse(v.begin(),v.end());
    return v;
}
