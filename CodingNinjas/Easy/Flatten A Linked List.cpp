#include <bits/stdc++.h> 

Node* merge(Node* head1, Node* head2) {
    if(head1==NULL)
       return head2;
   if(head2==NULL)
       return head1;
    
    Node* head;
    
    if(head1->data < head2->data) {
        head = head1;
        head->child = merge(head1->child,head2);
    } else {
        head = head2;
        head->child = merge(head1,head2->child);
    }
    head->next = NULL;
    return head;
}

Node* flattenLinkedList(Node* head) {
    if(head==NULL || head->next==NULL) return head;
    Node *flattened = flattenLinkedList(head->next);
    return merge(head,flattened);
}
