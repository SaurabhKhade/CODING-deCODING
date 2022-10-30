#include <bits/stdc++.h> 
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *head2 = NULL;
    while(head!=NULL) {
        LinkedListNode<int> *t = new LinkedListNode<int>(head->data);
        t->next = head2;
        head2 = t;
        head = head->next;
    }
    return head2;
}