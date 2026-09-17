class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(); 
        vector<int> a(n,0);
        int s=1,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c++;
            }else {
                s*=nums[i];
            }

        }
        if(c>1) return a;
        for(int i=0;i<n;i++){
            if(c==1){
                if(nums[i]==0) a[i]=s;
            } 
            else {
                a[i]=s/nums[i];
            }

        }
        return a;
    }
};