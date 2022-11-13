class Solution {
public:
    string reverseWords(string s) {
        stringstream ss;
        ss<<s;
        string word;
        stack<string> st;
        while(ss>>word) {
            st.push(word);
        }
        word = st.top();
        st.pop();
        
        while(!st.empty()) {
            word += " " + st.top();
            st.pop();
        }
        
        return word;
    }
};