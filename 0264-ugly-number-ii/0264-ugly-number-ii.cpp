class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> d(n);
        
        d[0]=1;
        int t1,t2,t3;
        t1=t2=t3=0;
        for(int i=1;i<n;i++){
           d[i]=min({d[t1]*2,d[t2]*3,d[t3]*5});
           if(d[i]==d[t1]*2) t1++;
           if(d[i]==d[t2]*3) t2++;
           if(d[i]==d[t3]*5) t3++;

        }
       
        return d[n-1];
    }
};