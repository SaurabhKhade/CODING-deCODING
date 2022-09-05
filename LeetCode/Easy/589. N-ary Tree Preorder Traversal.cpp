class Solution {
    void traverse(Node* root, vector<int> &traversal) {
        if(!root) return;
        traversal.push_back(root->val);
        for(auto &i: root->children) traverse(i,traversal);
    }
public:
    vector<int> preorder(Node* root) {
        vector<int> traversal;
        traverse(root, traversal);
        return traversal;
    }
};