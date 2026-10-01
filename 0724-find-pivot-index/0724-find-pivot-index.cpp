class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int d=0;
        for(int i=0;i<n;i++){
            d+=nums[i];
        }
        int s=0;
        for(int i=0;i<n;i++){
            if(d-nums[i]==2*s) return i;
            s+=nums[i];
        }
        return -1;
    }
};