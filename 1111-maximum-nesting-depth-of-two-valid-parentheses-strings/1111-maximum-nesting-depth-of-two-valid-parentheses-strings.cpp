class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        vector<int> c;
  int n= s.size(),m=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){ m++;
            c.push_back(m%2);}
            else {
            c.push_back((m)%2);
            m--;}
               
        }
        return c;
        
    }
};