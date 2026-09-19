class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int i=0; 
        int n= s.length();
        int j=0;
        int ans=0;
        while(j<n){
            if(m.find(s[j])!=m.end()){
               
                i=max(i,m[s[j]]+1);
                

            }
             ans=max(ans,j-i+1);

           m[s[j]]=j;
            j++;
           
        }
        ans=max(ans,j-i);
        return ans;
    }
};