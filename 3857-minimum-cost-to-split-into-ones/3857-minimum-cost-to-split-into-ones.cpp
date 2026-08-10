class Solution {
public:
    void dfs(int a, int b, int& ans) {

        if (a > 1) {
            int x = a / 2;
            int y = a - x;

            ans += x * y;
            dfs(x, y, ans);
        }

        if (b > 1) {
            int x = b / 2;
            int y = b - x;

            ans += x * y;
            dfs(x, y, ans);
        }
    }

    int minCost(int n) {
        int a = n / 2;
        int b = n - a;

        int ans = 0;

        
        ans += a * b;

        dfs(a, b, ans);

        return ans;
    }
};