class Solution {
public:
    int maxProfit(vector<int>& p) {
        int m=p[0];
        int i=1;
        int ans=0;
        int n= p.size();
        while(i<n){
            ans= max(ans,p[i]-m);
            if(m>p[i]) m=p[i];
            i++;
        }
        return ans;
    }
};