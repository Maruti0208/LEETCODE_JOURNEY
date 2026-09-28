class Solution {
public:
    bool canTransform(vector<int>& s, vector<int>& t) {
        int n= s.size();
        long long e=0;
        if(n!=t.size());
        for(int i=0;i<n;i++){
            e=e+s[i]-t[i];
        }
        return e==0;
    }
};