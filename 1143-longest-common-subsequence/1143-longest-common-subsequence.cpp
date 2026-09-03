class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int n= t1.size();
        int m=t2.size();
        vector<vector<int>>d(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            
            for(int j=1;j<=m;j++){
                if(t1[i-1]==t2[j-1])d[i][j]=1+d[i-1][j-1];
                else d[i][j]=max(d[i-1][j],d[i][j-1]);
              
            }
        }
        return d[n][m];
    }
};