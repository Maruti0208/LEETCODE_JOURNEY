class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int t) {
        long long ans = LLONG_MIN;
        int n = nums.size();
        int y = -1, j = -1;
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++) {
            if (m.find(t - nums[i]) != m.end()) {
                long long p = 1LL * nums[i] * (t - nums[i]);

                if (ans < p && nums[i] != t - nums[i]) {
                    y = i;
                    j = m[t - nums[i]];
                    ans = p;
                }
            }

            m[nums[i]] = i;
        }

        if (y == -1) return {-1,-1};
        if(nums[j]>nums[y]) return {j, y};
        return {y,j};
    }
};