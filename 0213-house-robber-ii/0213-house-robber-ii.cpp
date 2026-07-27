class Solution {
public:
    int dfs(vector<int> nums, int s,int e){
    
        if(e-s==0) return nums[s];
        vector<int> dp(e-s+1);
        dp[0]=nums[s];
        dp[1]=max(nums[s],nums[s+1]);
        for(int i=2;i<e-s+1;i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[s+i]);
        }
        return dp[e-s];
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];
        return max(dfs(nums,0,n-2),dfs(nums,1,n-1));
    }
};