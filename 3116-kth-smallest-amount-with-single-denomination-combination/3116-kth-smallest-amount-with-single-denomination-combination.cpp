class Solution {
public:
    long long lcm(long long a, long long b, long long limit) {
        return min(limit + 1, (a / gcd(a, b)) * b);
    }

    long long count(vector<int>& v, long long x) {
        long long ans = 0;
        int n = v.size();

        for (int mask = 1; mask < (1 << n); mask++) {
            long long L = 1;
            int bits = 0;
            bool ok = true;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    bits++;
                    L = lcm(L, v[i], x);

                    if (L > x) {
                        ok = false;
                        break;
                    }
                }
            }

            if (ok) {
                if (bits % 2)
                    ans += x / L;
                else
                    ans -= x / L;
            }
        }

        return ans;
    }

    long long findKthSmallest(vector<int>& v, int k) {
        long long low = 1;
        long long high = 1LL * (*min_element(v.begin(), v.end())) * k;

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (count(v, mid) >= k)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};