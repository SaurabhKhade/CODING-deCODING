#include <bits/stdc++.h> 

vector<int> getLevelOrder(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int>*> q;
    vector<int> v;
    q.push(root);
    while(!q.empty()) {
        if(q.front()) {
            v.push_back(q.front()->val);
            q.push(q.front()->left);
            q.push(q.front()->right);
        }
        q.pop();
    }
    return v;
}