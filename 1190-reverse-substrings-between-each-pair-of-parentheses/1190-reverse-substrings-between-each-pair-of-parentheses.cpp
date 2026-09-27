class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>   q;
        int n= s.length();
        string t="";
        q.push("");

        for(int i=0;i<n;i++){
            if(s[i]=='(') q.push(t);
            else if(s[i]==')'){
                string y= q.top();
                q.pop();
              reverse(y.begin(), y.end());

                q.top()=q.top()+y;
                
            }
            else {
                 
              q.top()+=(s[i]);
            }
        }
        string y= q.top();
        return y;
    }
};