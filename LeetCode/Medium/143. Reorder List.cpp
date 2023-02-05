class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode*> list;
        ListNode* temp = head;
        while(temp) {
          list.push_back(temp);
          temp = temp->next;
        }
        int i=1,j=list.size()-1, cur=0;
        bool flag = false;
        while(i<=j) {
          if(flag) {
            list[cur]->next = list[i];
            cur = i;
            i++;
          } else {
            list[cur]->next = list[j];
            cur = j;
            j--;
          }
          flag = !flag;
        }
        list[cur]->next = NULL;
    }
};