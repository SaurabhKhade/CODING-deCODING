#include <bits/stdc++.h> 

bool isPalindrome(LinkedListNode<int> *head) {
    vector<int> v;
    while(head) {
        v.push_back(head->data);
        head = head->next;
    }
    for(int i=0,j=v.size()-1; i<j; i++,j--) {
        if(v[i] != v[j]) return false;
    }
    return true;
}