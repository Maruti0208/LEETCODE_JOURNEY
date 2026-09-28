class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        unordered_map<long long, int> m;

        for(int i = 0; i < n; i++) {
            int s = 0;

            for(int j = i; j < n; j++) {
                s += nums[j] ;

               m[((2LL * nums[j]) % k + k) % k]++;

                int x = ((s % k) + k) % k;

                if(x == 0 || m.find(x) != m.end())
                    ans = max(j - i + 1, ans);
            }

            m.clear();
        }

        return ans;
    }
};