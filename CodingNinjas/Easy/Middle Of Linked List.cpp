#include <bits/stdc++.h> 

Node *findMiddle(Node *head) {
    Node *slow=head, *fast=head;
    while(fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}