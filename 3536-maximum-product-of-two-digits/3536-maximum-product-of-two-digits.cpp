class Solution {
public:
    int maxProduct(int n) {
        int ans=1,a=0,b=0;
        while(n>0){
            if(a<n%10) {
                b=a;
                a=n%10;
            }
            else if(b<n%10){
                b=n%10;
            }
            n/=10;
        } 
        return a*b;
        
    }
};