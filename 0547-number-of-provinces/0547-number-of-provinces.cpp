class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<int>& v, int i) {
        v[i] = 1;

        for (auto x : adj[i]) {
            if (v[x] == 0) {
                dfs(adj, v, x);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();

        vector<vector<int>> adj(n);

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                }
            }
        }

        vector<int> v(n, 0);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (v[i] == 0) {
                dfs(adj, v, i);
                ans++;
            }
        }

        return ans;
    }
};
