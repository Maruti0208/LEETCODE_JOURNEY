class Solution {
public:
    string interpret(string c) {
        string ans="";
        for(int i=0;i<c.size();i++){
            if(i==c.size()-1){
                if(c[i]==')') return ans;
                return ans+=c[i];
            }
            if(c[i]=='(' && c[i+1]==')') {
                ans+='o';
                i++;
            }
            else  if(c[i]=='(' || c[i]==')') ;
            else ans+=c[i];
        }
        return ans;

    }
};