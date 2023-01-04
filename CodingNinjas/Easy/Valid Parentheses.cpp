bool isValidParenthesis(string expression)
{
    stack<char> st;
    for(auto &chr:expression) {
        if(st.empty() || chr=='{' || chr=='[' || chr == '(') {
            st.push(chr);
            continue;
        }
        char top = st.top();
        st.pop();
        if(chr == ')' && top != '(') return false;
        if(chr == ']' && top != '[') return false;
        if(chr == '}' && top != '{') return false;
    }
    return st.empty();
}