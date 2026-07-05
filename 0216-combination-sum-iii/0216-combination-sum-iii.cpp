class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(int start, int k, int n, vector<int>& curr, int sum) {
         
        if (curr.size() == k && sum == n) {
            ans.push_back(curr);
            return;
        }

        
        if (curr.size() > k || sum > n)
            return;

        for (int i = start; i <= 9; i++) {
            curr.push_back(i);
            backtrack(i + 1, k, n, curr, sum + i);
            curr.pop_back();  
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
        backtrack(1, k, n, curr, 0);
        return ans;
    }
};
