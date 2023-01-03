class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*> l1 = makeArray(headA);
        vector<ListNode*> l2 = makeArray(headB);
        if(l1.size()==0 || l2.size()==0) return NULL;
        ListNode *common = NULL;
        int i = 0;
        while(i<l1.size() && i<l2.size() && l1[i]==l2[i]) {
            common = l1[i++];
        }
        return common;
    }
    vector<ListNode*> makeArray(ListNode *head) {
        vector<ListNode*> v;
        while(head) {
            v.push_back(head);
            head = head->next;
        }
        reverse(v.begin(), v.end());
        return v;
    }
};