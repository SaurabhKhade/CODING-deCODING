#include <bits/stdc++.h>

Node *firstNode(Node *head)
{
	unordered_map<Node*,int> mp;
    while(head) {
        if(mp[head]) return head;
        mp[head]++;
        head = head->next;
    }
    return NULL;
}