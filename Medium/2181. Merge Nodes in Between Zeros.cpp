class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *p=NULL, *q=NULL;
        head = head->next;
        int sum = 0;
        while(head != NULL) {
            if(head->val == 0) {
                ListNode *temp = new ListNode(sum);
                sum = 0;
                if(p==NULL) p = temp;
                if(q==NULL) q = temp;
                else {
                    q->next = temp;
                    q = temp;
                }
            } else sum += head->val;
            
            head = head->next;
        }
        
        return p;
    }
};