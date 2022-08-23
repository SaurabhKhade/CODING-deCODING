class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *head2 = NULL, *temp;
        while(head != NULL) {
            temp = new ListNode(head->val);
            temp->next = head2;
            head2 = temp;
            head = head->next;
        }
        return head2;
    }
};