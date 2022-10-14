class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL) return NULL;
        if(head->next->next == NULL) {
            head->next = NULL;
            return head;
        }
        bool flag = false;
        ListNode *p = head, *q = head;
        while(p->next->next) {
            p = p->next;
            if(flag) {
                flag = false;
                q = q->next; 
            } else flag = true;
        }
        q->next = q->next->next;
        return head;
    }
};