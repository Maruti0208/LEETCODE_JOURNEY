class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      
        int ans=nums[0],s=0;
        int n= nums.size();
      for(int i=0;i<n;i++){
        s+=nums[i];
        if(ans<s) ans=s;
        if(s<0) s=0;
      }
      return ans;

        
    }
};