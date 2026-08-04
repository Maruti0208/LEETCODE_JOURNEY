class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
         vector<int> a;
        for(int i=0;i<n-1;i++){
            if(nums[i]-nums[i+1]!=1){
               
                int t=nums[i]+1;
                while(t-nums[i+1]!=0){
                    a.push_back(t);
                    t++;
                }
            }
        }
        return a;

    }
};