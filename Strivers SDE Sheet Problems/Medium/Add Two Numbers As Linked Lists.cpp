#include <bits/stdc++.h>
Node *addTwoNumbers(Node *head1, Node *head2)
{
    int carry = 0;
    Node *temp=NULL, *head = NULL;
    while(head1 && head2) {
        int n = carry+head1->data+head2->data;
        if(temp) {
            temp->next = new Node(n%10);
            temp = temp->next;
        } else {
            temp = new Node(n%10);
        }
        if(head==NULL) {
            head = temp;
        }
        carry = n/10;
        head1 = head1->next;
        head2 = head2->next;
    }
    while(head1) {
        int n = carry+head1->data;
        if(temp) {
            temp->next = new Node(n%10);
            temp = temp->next;
        } else {
            temp = new Node(n%10);
        }
        if(head==NULL) {
            head = temp;
        }
        carry = n/10;
        head1 = head1->next;
    }
    while(head2) {
        int n = carry+head2->data;
        if(temp) {
            temp->next = new Node(n%10);
            temp = temp->next;
        } else {
            temp = new Node(n%10);
        }
        if(head==NULL) {
            head = temp;
        }
        carry = n/10;
        head2 = head2->next;
    }
    if(carry) {
        temp->next = new Node(1);
        temp = temp->next;
    }
    return head;
}