class Solution {
    void swaps(ListNode* head) {
        if(head->next == NULL || head->next->next == NULL) return;
        ListNode* temp = head->next->next;
        head->next->next = temp->next;
        head->next->next = temp->next;
        temp->next = head->next;
        head->next = temp;
        swaps(head->next->next);
    }
public:
    ListNode* swapPairs(ListNode* head) {
        if(head!=NULL && head->next != NULL) {
            ListNode* temp = head->next;
            head->next = temp->next;
            temp->next = head;
            head = temp;
        } else return head;
        swaps(head->next);
        return head;
    }
};