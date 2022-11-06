#include <bits/stdc++.h> 

void getCount(TreeNode<int> *root, int &cnt, bool isLeft) {
    if(!root) return;
    if(isLeft && !root->left && !root->right) {
        cnt += root->val;
    }
    getCount(root->left, cnt, true);
    getCount(root->right,cnt, false);
}

int sumOfLeftLeaves(TreeNode<int> *root)
{
    int cnt = 0;
    getCount(root, cnt, true);
    return cnt;
}