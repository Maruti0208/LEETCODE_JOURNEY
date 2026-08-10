class Solution {
public:
int dfs(int n,vector<int>&dp){
    if(n==0)return 0;
    if(n==1) return 1;
    if(dp[n]) return dp[n];
    else{
       dp[n] =dfs(n-1,dp)+dfs(n-2,dp);
    

    }
 return dfs(n-1,dp)+dfs(n-2,dp);
}
    int fib(int n) {
        
        vector<int> dp(n+1);
        dp[0]=0;
        if(n==0)return 0;
        dp[1]=1;
       dfs(n,dp);
       return dp[n];
    }
};