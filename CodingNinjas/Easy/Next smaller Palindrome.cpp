#include <bits/stdc++.h> 

void reduce(string &s, int lmid, int rmid) {
    if(s[lmid]=='0') {
        reduce(s, lmid-1, rmid+1);
    } else if(lmid==0 && s[lmid]=='1') {
        string ss;
        for(int i=0; i<s.size()-1; i++) {
            ss += '9';
        }
        s = ss;
    } else {
        s[lmid++]-=1;
        s[rmid--]-=1;
        while(lmid<=rmid) {
            s[lmid++] = s[rmid--] = '9';
        }
    }
}

void reduce(string &s, int mid) {
    if(s[mid]=='0') {
        reduce(s, mid-1, mid+1);
    } else {
        s[mid]-=1;
    }
}

string nextSmallerPalindrome(string &s) {
	int mid = s.size()/2;
    if(s.size()%2==0) {
       reduce(s,mid-1,mid);
    } else {
        reduce(s,mid);
    }
    return s;
}