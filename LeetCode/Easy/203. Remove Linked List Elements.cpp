class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *t = NULL,*h=NULL;

        while(head) {
            if(head->val == val) {
                head = head->next;
                continue;
            }
            if(h==NULL) {
                h = new ListNode(head->val);
                t = h;
            } else {
                t->next = new ListNode(head->val);
                t = t->next;
            }
            head = head->next;
        }
        return h;
    }
};