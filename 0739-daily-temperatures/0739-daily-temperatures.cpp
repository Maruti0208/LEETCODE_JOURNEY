class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        stack<int> s;
        vector<int> v(n);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && t[s.top()]<=t[i]){
                s.pop();
            }
            if(!s.empty()) v[i]=s.top()-i;
            else v[i]=0;
            s.push(i);

        }
        return v;

    }
};