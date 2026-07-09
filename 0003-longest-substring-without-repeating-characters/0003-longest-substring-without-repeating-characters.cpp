class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = s.length();
        int i = 0;
        int j = 0;
        int ans = 0;

        vector<int> v(260, 0);
        while (j < l) {
            if (v[s[j] ] > 0) {
              
                v[s[i] ]--;
                i++;
            } else {

                v[s[j] ]++;
     j++;
                ans = max(ans, j - i);
                
            }
        }
        return ans;
    }
};