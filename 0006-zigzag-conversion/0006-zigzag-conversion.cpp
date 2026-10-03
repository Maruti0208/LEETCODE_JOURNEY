class Solution {
public:
    string convert(string s, int k) {
        int n= s.size();
        vector<string> st(k,"");
        if(n<=2 || k==1) return s;
        string t="";
        int d=1;
       int i=0;
        for(int j=0;j<n;j++){
         st[i].push_back(s[j]);
        if(i==0) d=1;
        if(i==k-1 ) d=-1;
        i+=d;
        }
        for(int j=0;j<k;j++){
            t+=st[j];
        }
        return t;
    }
};