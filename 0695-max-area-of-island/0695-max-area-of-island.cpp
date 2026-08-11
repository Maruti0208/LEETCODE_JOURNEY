class Solution {
public:
    int dfs(vector<vector<int>>& g, int i, int j) {
        int n = g.size();
        int m = g[0].size();
        if (i >= n || i < 0 || j < 0 || j >= m || g[i][j] == 0)
            return 0;
        g[i][j] = 0;

        return 1+dfs(g, i + 1, j) + dfs(g, i, j + 1) +
               dfs(g, i - 1, j) + dfs(g, i, j - 1);
    }
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (g[i][j] == 1) {
                    int a = dfs(g, i, j);
                    ans = max(ans, a);
                }
            }
        }
        return ans;
    }
};