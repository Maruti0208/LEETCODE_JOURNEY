class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& e) {
        vector<vector<int>> adj(n);
        if(n==1) return true;
        int t = e.size();
        vector<int> d(n),ans;
        for (int i = 0; i < t; i++) {
            int u = e[i][1];
            int v = e[i][0];
            adj[u].push_back(v);
           
            d[v]++;
       
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(d[i]==0) q.push(i);
        }
        int c=0;
        while(!q.empty()){
           int t= q.front();
            q.pop();
            c++;
            for(auto x: adj[t]){
                d[x]--;
                if(d[x]==0) q.push(x);
            }
        }
        return c==n;
    }
};