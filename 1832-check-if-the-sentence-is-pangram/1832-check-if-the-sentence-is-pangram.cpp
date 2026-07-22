class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int> a(26,0);
        
        for(auto c:s){
            a[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]==0) return false;
        }
        return true;
    }
};