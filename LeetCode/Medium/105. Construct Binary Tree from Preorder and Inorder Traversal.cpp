class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i=0;
        return helper(0, preorder.size()-1, i, preorder, inorder);
    }
    TreeNode* helper(int l, int h, int &i, vector<int>& preorder, vector<int>& inorder) {
      if(l>h) return NULL;
      TreeNode* root = new TreeNode(preorder[i]);
      int j;
      for(j=l; inorder[j]!=preorder[i]; j++);
      ++i;
      root->left = helper(l, j-1, i, preorder, inorder);
      root->right = helper(j+1, h, i, preorder, inorder);
      return root;
    }
};