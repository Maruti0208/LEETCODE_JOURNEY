class Solution {
public:
    int maxDistance(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        vector<vector<int>> v(n, vector<int>(m, 0));
        int ans = 0;
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (g[i][j] == 1) {
                    v[i][j] = 1;
                    q.push({{i, j}, 0});
                }
            }
        }
        int dr[] = {1, 0, -1, 0};
        int dc[] = {0, 1, 0, -1};
        while (!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int a = q.front().second;
            q.pop();
            ans = max(ans, a);

                for (int i = 0; i < 4; i++) {
                int t = r + dr[i];
                int y = c + dc[i];
                if (t >= 0 && t < n && y >= 0 && y < m && v[t][y] == 0) {
                    v[t][y] = 1;
                    q.push({{t, y}, a + 1});
                }
            }
        }
        if (ans == 0)
            return -1;
        return ans;
    }
};