class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int ans=0;
        int i=0;
        int j=n-1;
        while(i<j){
            int w=j-i;
            int t= min(h[i],h[j]);
            ans= max(w*t,ans);
            if(h[i]>h[j]) j--;
            else i++;
        }
        return ans;
    }
};