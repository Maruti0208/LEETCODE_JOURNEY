class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
         vector<vector<string>> r;
         map<string ,vector<string>> m;
         int n= s.size();
         for(int i=0;i<n;i++){
            string t=s[i];
            sort(t.begin(),t.end());
            m[t].push_back(s[i]);
         }
         for(auto v:m){
            r.push_back(v.second);
         }
         return r;
    }
};