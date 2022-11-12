class MedianFinder {
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
public:    
    void addNum(int n) {
        if(max_heap.empty() || n<max_heap.top()) {
            max_heap.push(n);
        } else {
            min_heap.push(n);
        }
        if(max_heap.size() > min_heap.size()+1) {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
        if(min_heap.size() > max_heap.size()+1) {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
    }
    
    double findMedian() {
        if(min_heap.size()==max_heap.size()) {
            return (max_heap.top()+min_heap.top())/2.0;
        }
        if(min_heap.size()>max_heap.size()) {
            return min_heap.top();
        }
        return max_heap.top(); 
    }
};