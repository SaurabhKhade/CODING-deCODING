#include <bits/stdc++.h> 
vector<string> Triangle(int n)
{
    vector<string> v;
    for(int i=n; i>0; i--) {
        string s;
        for(int j=0; j<n-i; j++) s+=" ";
        for(int j=0; j<i*2-1; j++) s+="*";
        v.push_back(s);
    }
    return v;
}
