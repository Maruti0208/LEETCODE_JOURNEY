class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long ans=0;
        long long a=0;
        for(auto & ch:s){
            if(ch==c){
                a++;
                ans+=a;

            }
        }
        return ans;
    }
};