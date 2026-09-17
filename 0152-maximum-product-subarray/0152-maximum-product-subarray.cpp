class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int a=nums[0],b=nums[0];
        int ans=a;
        for(int i=1;i<n;i++){
            if(nums[i]<0) swap(a,b);
            a=max(nums[i],a*nums[i]);
            b=min(nums[i],b*nums[i]);
            ans=max(ans,a);
        }
        return ans;
    }
};