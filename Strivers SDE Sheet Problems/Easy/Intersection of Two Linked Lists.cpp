#include <bits/stdc++.h> 

int findIntersection(Node *firstHead, Node *secondHead)
{
    vector<Node*> v1,v2;
    while(firstHead) {
        v1.push_back(firstHead);
        firstHead = firstHead->next;
    }
    while(secondHead) {
        v2.push_back(secondHead);
        secondHead = secondHead->next;
    }
    int merged_at = -1;
    for(int i=v1.size()-1, j=v2.size()-1; i>=0 && j>=0; i--, j--) {
        if(v1[i]==v2[j]) merged_at = v1[i]->data;
        else break;
    }
    
    return merged_at;
}