class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int> st;
        int profit = 0;
        for(auto &i:prices) {
            if(!st.empty()) {
                if(st.top()>i) {
                    if(st.size()==2) {
                        int x = st.top();
                        st.pop();
                        profit += x - st.top();
                    }
                    st.pop();
                } else if(st.size()==2) {
                    st.pop();
                } 
            }
            st.push(i);
        }
        if(st.size()==2) {
            int x = st.top();
            st.pop();
            profit += x - st.top();
        } 
        return profit;
    }
};
