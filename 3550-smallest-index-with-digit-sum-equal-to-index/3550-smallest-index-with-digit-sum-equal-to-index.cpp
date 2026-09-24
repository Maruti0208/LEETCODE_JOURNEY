class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int k=0;
            int c= nums[i];
            while(c>0){
                k+=c%10;
                c/=10;
            }
           
            if(k==i) return i;
        }
        return -1;
    }

};