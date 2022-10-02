class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *mid = head,*p = head;
        bool flag = false;
        
        while( p!= NULL) {
            if(flag) {
                mid = mid->next;
            }
            p = p->next;
            flag = !flag;
        }
        return mid;
    }
};  