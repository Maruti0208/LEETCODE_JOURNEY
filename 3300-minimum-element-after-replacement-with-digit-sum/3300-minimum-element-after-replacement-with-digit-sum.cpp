class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int ans= INT_MAX;
        for(auto c:nums){
            int a=0;
            while(c>0){
                a+=c%10;
                c/=10;
            }
            ans=min(ans,a);
            
        }
        return ans;
    }
};