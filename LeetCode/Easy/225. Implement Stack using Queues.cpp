class MyStack {
    queue<int> q;
public:
    void push(int x) {
        return q.push(x);
    }
    
    int pop() {
        int n=q.size()-1;
        while(n--) {
            q.push(q.front());
            q.pop();
        }
        int popped = q.front();
        q.pop();
        return popped;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};