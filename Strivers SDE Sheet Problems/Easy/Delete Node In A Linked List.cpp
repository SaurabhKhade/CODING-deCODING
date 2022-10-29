#include <bits/stdc++.h> 

void deleteNode(LinkedListNode<int> * node) {
    while(node->next->next) {
        node->data = node->next->data;
        node = node->next;
    }
    node->data = node->next->data;
    delete node->next;
    node->next = NULL;
}