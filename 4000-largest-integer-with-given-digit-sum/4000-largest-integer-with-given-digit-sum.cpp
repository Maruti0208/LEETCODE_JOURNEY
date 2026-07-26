class Solution {
public:
    int largestInteger(int n, int s) {
        int ans=0;
        if(s==0) return 0;
        if(n*9<s) return -1;
        else{
            while(n>0){
                if(s>=9&&n>0) {
                    ans=ans*10+9;
                    s-=9;
                    n--;
                    }
                else if(n>0) {
                    ans=ans*10+s;
                    s-=s;
                    n--;
                }
            }
        }
    return ans;
        
    }
};