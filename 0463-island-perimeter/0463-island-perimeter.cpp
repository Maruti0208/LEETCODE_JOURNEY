class Solution {
public:
    int dfs(vector<vector<int>>& g,vector<vector<int>> &v, int i, int j,int n,int m){
        if(i>=n ||i<0 || j>=m ||j<0 || g[i][j]==0 ) return 1;
        if(v[i][j]==1) return 0;
        v[i][j]=1;
        return dfs(g,v,i+1,j,n,m)+dfs(g,v,i-1,j,n,m)+dfs(g,v,i,j+1,n,m)+dfs(g,v,i,j-1,n,m);
    }
    int islandPerimeter(vector<vector<int>>& g) {
        int n=g.size();
        int m=g[0].size();
        vector<vector<int>> v(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==0 && g[i][j]==1){
                   int a=  dfs(g,v,i,j,n,m);
                 ans+=a;
                }
            }
        }
        return ans;
    }
};