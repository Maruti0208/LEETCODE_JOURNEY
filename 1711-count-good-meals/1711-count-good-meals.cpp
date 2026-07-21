class Solution {
public:
    long long mod = 1e9 + 7;
    int countPairs(vector<int>& m) {
        int n = m.size();
        map<int, int> mp;
        const int MOD = 1e9 + 7;
        long long ans = 0;
        for (int i = 0; i < n ; i++) {
           for (int j = 1; j <= (1 << 21); j *= 2) {
                if (mp.count(j - m[i]))
                    ans = (ans + mp[j - m[i]]) % MOD;
            }
            mp[m[i]]++;
        }

        return ans % mod;
    }
};