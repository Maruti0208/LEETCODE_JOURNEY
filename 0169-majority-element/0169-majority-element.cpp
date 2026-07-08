class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        int a=nums[0];
     int k=1;
        for(int i=1;i<n;i++){
            if(a==nums[i]){
                k++;
            }
           else if(k<=0 ){
                a=nums[i];
                k=1;
            }
           else k--;
        }
        return a;
    }
};