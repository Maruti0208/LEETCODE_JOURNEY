class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int ans=0,n=s.size();
        for(int i=0;i<n;i++){
            int t=0;
            for(char & c: s[i]){
                if(c==' ') t++;
            }
            ans=max(ans,t);
        }
        return ans+1;
        
    }
};