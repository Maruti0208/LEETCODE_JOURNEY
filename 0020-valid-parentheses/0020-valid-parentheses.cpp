class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int size = s.size();
        for (int i = 0; i < size; i++) {
            if (st.empty() && (s[i] == '}' || s[i] == ')' || s[i] == ']')) {
                return false;
            }

            if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
                st.push(s[i]);
            } 
            else {
                char top = st.top();
                st.pop();
                if ((s[i] == '}' && top != '{') ||
                    (s[i] == ')' && top != '(') ||
                    (s[i] == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};