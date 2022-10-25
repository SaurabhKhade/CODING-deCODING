class Trie {
    class Node {
        bool isEnd;
        vector<Node*> childs;
        public:
        Node() {
            isEnd = false;
            childs.resize(26, NULL);
        }
        void insert(char chr) {
            childs[chr-'a'] = new Node();
        }
        Node* get(char chr) {
            return childs[chr-'a'];
        }
        bool has(char chr) {
            return childs[chr-'a'] != NULL;
        }
        bool isEndNode() {
            return isEnd;
        }
        void setEndNode() {
            isEnd = true;
        }
    };
    Node *root;
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* temp = root;
        
        for(auto &c:word) {
            if(!temp->has(c)) {
                temp->insert(c);
            }
            temp = temp->get(c);
        }
        
        temp->setEndNode();
    }
    
    Node* hasPrefix(string prefix) {
        Node* temp = root;
        
        for(auto &c:prefix) {
            if(!temp->has(c)) return NULL;
            temp = temp->get(c);
        }
        
        return temp;
    }
    
    bool search(string word) {
        Node* pref = hasPrefix(word);
        return pref != NULL && pref->isEndNode();
    }
    
    bool startsWith(string prefix) {
        Node* pref = hasPrefix(prefix);
        return pref != NULL;
    }
};
