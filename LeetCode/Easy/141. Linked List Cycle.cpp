class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=head, *fast=head;
        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow) return true;
        }
        return false;
    }
};