class Solution {
public:
    void dfs(vector<vector<char>>& g, int i, int j) {
        int n=g.size();
        int m=g[0].size();
        if (i ==n || i < 0 || j < 0 || j == m || g[i][j] == '0')
            return;
        g[i][j] = '0';
        dfs(g, i + 1, j);
        dfs(g, i, j + 1);
        dfs(g, i - 1, j);
        dfs(g, i, j - 1);
    }
    int numIslands(vector<vector<char>>& g) {
        int n = g.size();
        int m = g[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (g[i][j] == '1') {
                    dfs(g, i, j);
                    ans++;
                }
            }
        }
            return ans;
    }
};