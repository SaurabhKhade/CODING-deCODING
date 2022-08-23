class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        while(head != NULL) {
            v.push_back(head->val);
            head = head->next;
        }
        int i=0,j=v.size()-1;
        while(i<j) {
            if(v[i++] != v[j--]) return false;
        }
        return true;
    }
};