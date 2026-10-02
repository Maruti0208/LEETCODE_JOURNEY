class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i-1]==nums[i]) continue;
            int j=i+1;
            int k=n-1;    
            while(j<k){
                
                if(nums[i]+nums[j]+nums[k]==0){ v.insert({nums[i],nums[j],nums[k]});
                j++;
                k=n-1;
                }
                if(nums[i]+nums[j]+nums[k]>0) k--;
                else j++;

            }   
             }
        vector<vector<int>> v1(v.begin(),v.end());
             return v1;
    }
};