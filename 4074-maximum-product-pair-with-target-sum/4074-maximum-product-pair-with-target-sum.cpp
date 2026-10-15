
class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int t) {
        long long ans = LLONG_MIN;
        int a = -1, b = -1;
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            int x = t - nums[i];
            auto it = m.find(x);

            if (it != m.end() && x != nums[i]) {
                long long p = 1LL * nums[i] * x;

                if (p > ans) {
                    ans = p;
                    a = it->second;
                    b = i;
                }
            }

            m[nums[i]] = i;
        }

        if (a == -1) return {-1, -1};

        if (nums[a] > nums[b]) return {a, b};
        return {b, a};
    }
};
