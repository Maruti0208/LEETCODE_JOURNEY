class Solution {
public:
    int dfs(vector<vector<int>>& g, vector<vector<int>>& v, int i, int j) {
        int n = g.size();
        int m = g[0].size();
         
        if (i < 0 || i >= n || j < 0 || j >= m || g[i][j] == 0 || v[i][j])
            return 0;
 v[i][j] = 1;
      

         

        return 1 + dfs(g, v, i + 1, j) + dfs(g, v, i - 1, j) +
               dfs(g, v, i, j + 1) + dfs(g, v, i, j - 1);
    }
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        int ans = 0;
        vector<vector<int>> v(n, vector<int> (m,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (g[i][j] == 1 && v[i][j] == 0)
                    ans = max(dfs(g, v, i, j),ans);
            }
        }
        return ans;
    }
};