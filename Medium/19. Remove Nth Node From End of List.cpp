class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p = head, *q = head;
        while(n>0) {
            p = p->next;
            n--;
        }
        if(p == NULL) {
            head = head->next;
        } else {
            while(p->next != NULL) {
                p = p->next;
                q = q->next;
            }
            q->next = q->next->next;
        }
        return head;
    }
};