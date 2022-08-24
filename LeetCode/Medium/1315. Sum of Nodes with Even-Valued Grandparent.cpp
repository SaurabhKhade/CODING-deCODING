class Solution {
    
    int sum = 0;
    
    int grandParent(vector<int> &ancestor, int n) {
        n -= 2;
        if(n<0) n += 3;
        return ancestor[n];
    }
    
    void recurse(TreeNode* root, vector<int> ancestor, int cur){
        if(root == NULL) return;
        if(grandParent(ancestor,cur)==0) sum += root->val;
        
        if(root->val%2 == 0) ancestor[cur] = 0;
        else ancestor[cur] = 1;
        
        if(root->left != NULL)
            recurse(root->left, ancestor, (cur+1)%3);
        if(root->right != NULL)
            recurse(root->right, ancestor, (cur+1)%3);
    }
public:
    int sumEvenGrandparent(TreeNode* root) {
        recurse(root, {1,1,1}, 0);
        return sum;
    }
};