class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        int p = 0;
        int q = 0;

        for (int i = 0; i < n; i++) {
            int curr = cost[i] + min(p, q);
            q = p;
            p = curr;
        }

        return min(p, q);
    }
};