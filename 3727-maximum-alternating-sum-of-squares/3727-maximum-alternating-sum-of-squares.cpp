class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n= nums.size();
        vector<long long > a(n);
        for(int i=0;i<n;i++){
            a[i]=nums[i]*nums[i];
        }
        long long ans=0;
        sort(a.begin(),a.end());
        int i=0;
        int j=n-1;
        while(i<=j){
            if(i==j) {ans+=a[i]; return ans;}
            else{ ans=ans+a[j]-a[i];
            i++;j--;}
        }
     return ans;   
    }
};