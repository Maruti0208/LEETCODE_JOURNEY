class Solution {
public:
    bool closeStrings(string word1, string word2) {
            int n=word1.size();
            int m=word2.size();
            if(n!=m) return false;
            vector<int> f(27);
            for(char c:word1){
                f[c-'a']++;
            }
             vector<int> f2(27);
            for(char c: word2){
                f2[c-'a']++;
                
            }
            for(int i=0;i<26;i++){
                if((f[i]==0 && f2[i]!=0)|| (f[i]!=0 && f2[i]==0))
                return false;
            }
            sort(f.begin(), f.end());
            sort(f2.begin(), f2.end());
        return f==f2;
    }
};