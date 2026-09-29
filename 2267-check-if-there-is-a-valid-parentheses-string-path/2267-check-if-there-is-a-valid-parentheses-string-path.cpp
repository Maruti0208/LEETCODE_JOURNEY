class Solution {
public:
    int n, m;

    bool dfs(vector<vector<char>>& g, vector<vector<vector<int>>>& v,
             int i, int j, int c) {

        if (g[i][j] == '(')
            c++;
        else
            c--;

        if (c < 0)
            return false;

        if (i == n - 1 && j == m - 1)
            return c == 0;

        if (v[i][j][c])
            return false;

        v[i][j][c] = 1;

        if (i < n - 1) {
            if (dfs(g, v, i + 1, j, c))
                return true;
        }

        if (j < m - 1) {
            if (dfs(g, v, i, j + 1, c))
                return true;
        }

        return false;
    }

    bool hasValidPath(vector<vector<char>>& g) {

        n = g.size();
        m = g[0].size();

        if ((n + m - 1) % 2)
            return false;

        if (g[0][0] == ')')
            return false;

        if (g[n - 1][m - 1] == '(')
            return false;

        vector<vector<vector<int>>> v(
            n,
            vector<vector<int>>(m, vector<int>(n + m, 0))
        );

        return dfs(g, v, 0, 0, 0);
    }
};