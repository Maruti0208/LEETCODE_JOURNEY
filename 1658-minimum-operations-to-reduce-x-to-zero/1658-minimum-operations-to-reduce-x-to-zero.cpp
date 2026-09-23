class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = 0;

        for (int a : nums)
            sum += a;

        int target = sum - x;

        if (target < 0)
            return -1;

        if (target == 0)
            return n;

        int i = 0;
        int s = 0;
        int len = -1;

        for (int j = 0; j < n; j++) {
            s += nums[j];

            while (s > target && i <= j)
                s -= nums[i++];

            if (s == target)
                len = max(len, j - i + 1);
        }

        if (len == -1)
            return -1;

        return n - len;
    }
};