class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *START = nullptr, *LAST = nullptr;
        int carry = 0;
        while(l1!=nullptr && l2!=nullptr) {
            int sum = l1->val+l2->val+carry;
            carry = sum/10;
            sum=sum%10;
            ListNode* newNode = new ListNode(sum);
            if(START==nullptr) {
                START = newNode;
                LAST = newNode;
            }
            else {
                LAST->next = newNode;
                LAST = newNode;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=nullptr) {
            int sum = l1->val+carry;
            carry = sum/10;
            sum=sum%10;
            ListNode* newNode = new ListNode(sum);
            LAST->next = newNode;
            LAST = newNode;
            l1 = l1->next;
        }
        while(l2!=nullptr) {
            int sum = l2->val+carry;
            carry = sum/10;
            sum=sum%10;
            ListNode* newNode = new ListNode(sum);
            LAST->next = newNode;
            LAST = newNode;
            l2 = l2->next;
        }
        if(carry!=0) {
            ListNode* newNode = new ListNode(carry);
            LAST->next = newNode;
            LAST = newNode;
        }
        return START;
    }
};