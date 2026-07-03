class Solution {
public:
    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        int n = online.size();

        vector<vector<pair<int,int>>> g(n);
        vector<int> indeg(n);
        int mx = 0;

        for (auto &e : edges) {
            int u = e[0], v = e[1], w = e[2];
            g[u].push_back({v, w});
            indeg[v]++;
            mx = max(mx, w);
        }

        queue<int> q;
        vector<int> topo;

        for (int i = 0; i < n; i++) {
            if (indeg[i] == 0)
                q.push(i);
        }

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            topo.push_back(u);

            for (auto &x : g[u]) {
                indeg[x.first]--;
                if (indeg[x.first] == 0)
                    q.push(x.first);
            }
        }

        auto check = [&](int val) {
            const long long INF = (1LL << 60);
            vector<long long> dp(n, INF);
            dp[0] = 0;

            for (int u : topo) {
                if (dp[u] == INF)
                    continue;
                if (u != 0 && u != n - 1 && !online[u])
                    continue;

                for (auto &x : g[u]) {
                    int v = x.first;
                    int w = x.second;

                    if (w < val)
                        continue;
                    if (v != n - 1 && !online[v])
                        continue;

                    dp[v] = min(dp[v], dp[u] + 1LL * w);
                }
            }

            return dp[n - 1] <= k;
        };

        int l = 0, r = mx, ans = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (check(mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return ans;
    }
};