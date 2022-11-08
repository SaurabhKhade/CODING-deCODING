class Solution {
public:
    string makeGood(string s) {
        while(true) {
            bool isModified = false;
            int i=0;
            string ss;
            while(i<s.size()) {
                if(i==s.size()-1 || abs(s[i]-s[i+1]) != 32) {
                    ss += s[i];
                } else {
                    i++;
                    isModified = true;
                }
                i++;
            }
            s = ss;
            if(!isModified) break;
        }
        return s;
        
        // Solution using stack
        // stack<char> st;
        // for(int i=s.size()-1; i>=0; i--) {
        //     if(st.empty() || abs(st.top()-s[i]) != 32) {
        //         st.push(s[i]);
        //     } else {
        //         st.pop();
        //     }
        // }
        // string ss;
        // while(!st.empty()) {
        //     ss += st.top();
        //     st.pop();
        // }
        // return ss;
    }
};
