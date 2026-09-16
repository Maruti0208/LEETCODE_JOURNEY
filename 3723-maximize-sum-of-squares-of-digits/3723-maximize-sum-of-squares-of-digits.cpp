class Solution {
public:
    string maxSumOfSquares(int n, int sum) {
        int c=0;
        int c1=n;
        if(n*9<sum) return "";
        string ans="";
        while(sum>0){
          
            c++;
          ans += char('0' + min(sum, 9));
            sum=sum-min(sum,9);

        }
        for(int i=0;i<n-c;i++) ans+='0';
        return ans;
    }
};