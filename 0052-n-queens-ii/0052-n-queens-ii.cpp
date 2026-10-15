class Solution {
public:
    int ans=0;

    void solve(int col, int n, vector<string>& a, vector<int>& r, vector<int>& dl, vector<int>& du) {
        if (col == n) {
            ans++;
        }
        for (int i = 0; i < n; i++) {
            if (r[i] == 0 && dl[i + col] == 0 && du[n - 1 - i + col] == 0) {
                a[i][col] = 'Q';
                r[i] = 1;
                dl[i + col] = 1;
                du[n - 1 + col - i] = 1;
                solve(col + 1, n, a, r, dl, du);
                a[i][col] = '.';
                r[i] = 0;
                dl[i + col] = 0;
                du[n - 1 + col - i] = 0;
            }
        }
    }

      int totalNQueens(int n) {

        vector<string> a(n);
        string s(n, '.');
        for (int i = 0; i < n; i++) {
            a[i] = s;
        }
        vector<int> r(n, 0);
        vector<int> dl(2 * n - 1);
        vector<int> du(2 * n - 1);
        solve(0, n, a, r, dl, du);
        return ans;
    }
};