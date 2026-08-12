class Solution {
public:
 int bfs(vector<vector<int>>& adj, int root) {
        int n = adj.size();

        vector<int> vis(n, 0);
        int ans = 0;
        queue<int> q;

        q.push(root);
        vis[root] = 1;

        while (!q.empty()) {
            int x = q.front();
            q.pop();

            ans++;

            for (int y : adj[x]) {
                if (!vis[y]) {
                    vis[y] = 1;
                    q.push(y);
                }
            }
        }

        return ans;
    }
    int findChampion(int n, vector<vector<int>>& e) {
        vector<vector<int>> adj(n);
        for (int i = 0; i < e.size() ;i++) {
            adj[e[i][0]].push_back(e[i][1]);
        }
        int c = 0;
        int ans =-1;

        for (int i = 0; i < n; i++) {
            if (bfs(adj, i) == n) {
                c++;
                if (c > 1)
                    return -1;
                ans = i;
            }
        }
        return ans;
    }
};