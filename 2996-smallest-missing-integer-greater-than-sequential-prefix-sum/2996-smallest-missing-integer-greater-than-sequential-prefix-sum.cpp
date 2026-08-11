class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n= nums.size();
        int c=nums[0];
        unordered_set<int >m(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==1) c+=nums[i];
            else {
            break;}
            
            
        }
        while(m.find(c)!=m.end()){
           c++;
        }
        return c;
    }
};