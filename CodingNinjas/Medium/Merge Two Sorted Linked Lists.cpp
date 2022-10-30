#include <bits/stdc++.h> 

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL) return second;
    if(second==NULL) return first;
    
    Node<int> *res = NULL;
    if(first->data < second->data) {
        res = first;
        res->next = sortTwoLists(first->next, second);
    } else {
        res = second;
        res->next = sortTwoLists(first, second->next);
    }
    return res;
}
