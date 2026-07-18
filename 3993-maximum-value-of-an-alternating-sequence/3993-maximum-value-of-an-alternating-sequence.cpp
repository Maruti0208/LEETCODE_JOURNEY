class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        long long ans=0;
        if(n==1) return s;
        if(n%2==0) ans= (long long)s + 1LL* m * ((n ) / 2)-(n-1)/2;
        else ans=(long long)s+1LL*m*((n-1)/2)-(n-1-1)/2;
     return ans;
    
    }
};