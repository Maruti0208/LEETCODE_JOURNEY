class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n= p.size();
        int m=p[0];
        int i=1;
        int ans=0;
        while(i<n){
            ans=max(ans,p[i]-m);
            if(p[i]<m) m=p[i];
            i++;
        }
        return ans;

    }
};