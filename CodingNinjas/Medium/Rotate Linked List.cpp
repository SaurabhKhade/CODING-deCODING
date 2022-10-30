#include <bits/stdc++.h> 

int len(Node *head) {
    int cnt = 0;
    while(head) {
        cnt++;
        head = head->next;
    }
    return cnt;
}

Node *rotate(Node *head, int k) {
    int n = len(head);
    if(n==1) return head;
    k = k%n;
    if(k==0) return head;
    k = n - k -1;
    Node* first = head;
    while(k--) {
        first = first->next;
    }
    Node* second = first->next;
    while(second->next) second = second->next;

    second->next = head;
    Node* temp = first->next;
    first->next = NULL;
    return temp;
}