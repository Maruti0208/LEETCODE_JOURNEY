class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return 0;
        int n=s.size();
        vector<int> a(26);
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
            a[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(a[i]!=0) return 0;
        }
        return 1;
    }
};