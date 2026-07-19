class Solution {
public:
    int minSwaps(string s) {
        int n=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='[') n++;
           else if(n>0) n--;
        }
        return (n+1)/2;
        
    }
};