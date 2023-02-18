class BrowserHistory {
    vector<string> history;
    int size, current;
public:
    BrowserHistory(string homepage) {
        history = vector<string> (5002);
        history[0]=homepage;
        size = 0;
        current = 0;
    }
    
    void visit(string url) {
        current++;
        history[current] = url;
        size = current;
    }
    
    string back(int steps) {
        if(steps>current) {
            current = 0;
        } else {
            current -= steps;
        }
        return history[current];
    }
    
    string forward(int steps) {
        if(steps+current>size) {
            current = size;
        } else {
            current += steps;
        }
        return history[current];
    }
};