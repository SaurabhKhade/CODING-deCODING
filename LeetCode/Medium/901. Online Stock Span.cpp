class StockSpanner {
    stack<pair<int,int>> stack;
public:
    int next(int price) {
        int cnt = 1;
        while(!stack.empty() && stack.top().first <= price) {
            cnt += stack.top().second;
            stack.pop();
        }
        stack.push({price,cnt});
        return cnt;
    }
};