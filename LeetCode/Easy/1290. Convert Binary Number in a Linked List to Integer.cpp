class Solution {
public:
    int getDecimalValue(ListNode* head) {
        unsigned long num = 0;
        while(head) {
            num = 2*num + head->val;
            head = head->next;
        }
        return num;
    }
};