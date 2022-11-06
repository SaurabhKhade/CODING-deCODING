#include <bits/stdc++.h> 

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    if(K==0) return head;
    LinkedListNode<int> *fast = head, *slow = head;
    K++;
    while(K-- && fast) {
        fast = fast->next;
    }
    if(!fast && K==0) return slow->next;
    while(fast) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return head;
}