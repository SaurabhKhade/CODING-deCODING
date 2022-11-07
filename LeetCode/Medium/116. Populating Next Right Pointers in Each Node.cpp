class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        createConnections(root->left, root->right);
        makeNulls(root);
        return root;
    }
    
    void makeNulls(Node* root) {
        if(root) {
            root->next = NULL;
            makeNulls(root->right);   
        }
    }
    
    void createConnections(Node* r1, Node* r2) {
        if(r1==NULL || r2==NULL) return;
        r1->next = r2;
        createConnections(r1->left,r1->right);
        createConnections(r2->left,r2->right);
        createConnections(r1->right, r2->left);
    }
};