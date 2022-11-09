class Solution {        
    public:
        ListNode* reverseList(ListNode* head) {
            if(head==NULL || head->next==NULL) return head;
            ListNode *first = head, *curr = head->next, *next = head->next->next; 
            first->next = NULL;
            while(next != NULL) {
                curr->next = first;
                first = curr;
                curr = next;
                next = next->next;
            }
            curr->next = first;
            first = curr;
            return first;
        }
};