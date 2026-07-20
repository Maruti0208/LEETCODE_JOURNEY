class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& g, int k) {
        int n=g.size();
        int m=g[0].size();
        vector<int> v(m*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            v[m*i+j]=g[i][j];

        }
        
         vector<vector<int>> ans(n,vector<int>(m));
         int s=k%(m*n);
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=v[(m*n-s+i*m+j)%(m*n)];
            }
         }
        return ans;

        
    }
};