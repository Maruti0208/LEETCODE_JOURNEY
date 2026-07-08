class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        set<vector<int>> s;
        for(int i=0;i<n-2;i++){
            if(i>0&& nums[i]==nums[i-1])continue;
            int k=i+1;
            int j=n-1;
            while(k<j){
                if(nums[i]+nums[k]+nums[j]==0){
                    s.insert({nums[i],nums[j],nums[k]});
                   k++;
                   j--;
                }
                else if(nums[i]+nums[k]+nums[j]>0) j--;
                else k++;

            }
           
        }
    vector< vector<int> > ans(s.begin(),s.end());
           return ans;
        
    }
};