class Solution {
public:
    
int find(int a,vector<int>& p){
    if(p[a]==a) return a;
    return p[a]=find(p[a],p);
}
    vector<int> findRedundantConnection(vector<vector<int>>& e) {
        int n=e.size();
    vector<int> p(n+1);
    for(int i=0;i<=n;i++){
        p[i]=i;
    }
    for(auto x:e){
        int a=x[0];
        int b=x[1];
        int t=find(a,p);
        int h=find(b,p);
        if(t==h) return {a,b};
        p[h]=t;
    }
    return {};
    }
};