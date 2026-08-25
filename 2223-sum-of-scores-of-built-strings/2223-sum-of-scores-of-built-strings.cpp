 class Solution {
public:
    long long sumScores(string s) {
        int n = s.size();
        vector<int> Z(n, 0);
        Z[0] = n;

        int l = 0, r = 0;
        for (int i = 1; i < n; i++) {
            if (i < r)
                Z[i] = min(r - i, Z[i - l]);
            while (i + Z[i] < n && s[Z[i]] == s[i + Z[i]])
                Z[i]++;
            if (i + Z[i] > r) {
                l = i;
                r = i + Z[i];
            }
        }

        long long sum = 0;
        for (int z : Z) sum += z;
        return sum;
    }
};