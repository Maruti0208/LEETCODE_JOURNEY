class Solution {
public:
    int maxDepth(string s) {
        int c=0,ans=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='(')
            c++;
            if(s[i]==')') c--;
            ans=max(ans,c);
        }
        return ans;
    }
};