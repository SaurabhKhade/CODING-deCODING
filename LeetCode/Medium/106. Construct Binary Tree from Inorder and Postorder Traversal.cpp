class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int i=inorder.size()-1;
        return helper(0, i, i, inorder, postorder);
    }
    TreeNode* helper(int l, int h, int &i, vector<int>& inorder, vector<int>& postorder) {
      if(l>h) return NULL;
      TreeNode* root = new TreeNode(postorder[i]);
      int j;
      for(j=l; inorder[j]!=postorder[i] && j<=h; j++);
      --i;
      root->right = helper(j+1, h, i, inorder, postorder);
      root->left = helper(l, j-1, i, inorder, postorder);
      return root;
    }
};