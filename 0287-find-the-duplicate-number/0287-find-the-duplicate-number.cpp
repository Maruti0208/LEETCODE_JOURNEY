class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
       
        int i=0,j=n-1;
        while(i<=j){
            int m=(j-i)/2+i;
            if(i>0 && nums[m-1]==nums[m] || j<n-1 && nums[m]==nums[m+1]) return nums[m];
            if(nums[m]>m){
                i=m+1;
            }
            else j=m;
        }
        return -1;
    }
};