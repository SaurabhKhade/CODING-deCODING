#include<bits/stdc++.h>

string reverseString(string str) {
    stack<string> st;
    string tmp;
    for(auto &i:str) {
        if(i==' ' && tmp != "") {
            st.push(tmp);
            tmp = "";
        } else if(i != ' ') {
            tmp += i;
        }
    }
    if(tmp == "") {
        tmp = st.top();
        st.pop();
    }
    while(!st.empty()) {
        tmp += ' '+ st.top();
        st.pop();
    }
    return tmp;
}