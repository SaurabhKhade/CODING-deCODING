class Solution {
    void traverse(Node* root, vector<int> &traversal) {
        if(!root) return;
        for(auto &i: root->children) traverse(i,traversal);
        traversal.push_back(root->val);
    }
public:
    vector<int> postorder(Node* root) {
        vector<int> traversal;
        traverse(root, traversal);
        return traversal;
    }
};