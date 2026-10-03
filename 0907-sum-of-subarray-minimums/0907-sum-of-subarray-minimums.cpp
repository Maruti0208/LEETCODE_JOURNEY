class Solution {
public:
    int sumSubarrayMins(vector<int>& t) {
        int n=t.size();
        int mod=1e9+7;

        stack<int> s;
        vector<int> v(n),b(n);

        long long ans=0;

        for(int i=n-1;i>=0;i--){
            while(!s.empty() && t[s.top()]>=t[i]){
                s.pop();
            }

            if(!s.empty()) v[i]=s.top();
            else v[i]=n;

            s.push(i);
        }

        while(!s.empty()){
            s.pop();
        }

        for(int i=0;i<n;i++){
            while(!s.empty() && t[s.top()]>t[i]){
                s.pop();
            }

            if(!s.empty()) b[i]=s.top();
            else b[i]=-1;

            s.push(i);
        }

        for(int i=0;i<n;i++){
            long long l=i-b[i];
            long long r=v[i]-i;

            ans=(ans+l*r*t[i])%mod;
        }

        return ans;
    }
};