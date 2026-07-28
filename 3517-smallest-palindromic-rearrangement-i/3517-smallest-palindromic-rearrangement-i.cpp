class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        vector<int> f(26);

         
        for (int i = 0; i < n / 2; i++)
            f[s[i] - 'a']++;

        string first = "";

         
        for (int i = 0; i < 26; i++) {
            while (f[i]--) {
                first += char('a' + i);
            }
        }

        string ans = first;

        
        if (n % 2)
            ans += s[n / 2];

        
        reverse(first.begin(), first.end());
        ans += first;

        return ans;
    }
};