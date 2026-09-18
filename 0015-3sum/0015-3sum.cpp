class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0&& nums[i]==nums[i-1])continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0) {
                    vector<int> a={nums[i],nums[j],nums[k]};
                    s.insert(a);
                }
                if(nums[i]+nums[j]+nums[k]>0) k--;
                else j++;
            }
            
            
        }
       vector<vector<int>> t(s.begin(),s.end());
       return t;
    }
};