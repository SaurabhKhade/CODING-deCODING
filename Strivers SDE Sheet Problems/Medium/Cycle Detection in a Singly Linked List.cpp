#include <bits/stdc++.h> 

bool detectCycle(Node *head)
{
	if(head==NULL) return false;
    Node *slow = head, *fast = head->next;
    while(slow && fast) {
        if(slow==fast) return true;
        if(fast->next==NULL) return false;
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}