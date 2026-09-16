class Solution {
public:
    static const long long MOD = 1000000007LL;

    long long power(long long a, long long b) {
        long long ans = 1;

        while (b > 0) {
            if (b & 1LL)
                ans = ans * a % MOD;

            a = a * a % MOD;
            b >>= 1LL;
        }

        return ans;
    }

    int numberOfSets(int n, int k) {
        long long a = n + k - 1;
        long long b = 2LL * k;

        b = min(b, a - b);

        long long x = 1;
        long long y = 1;

        for (long long i = 1; i <= b; i++) {
            x = x * (a - b + i) % MOD;
            y = y * i % MOD;
        }

        y = power(y, MOD - 2);

        return (int)(x * y % MOD);
    }
};