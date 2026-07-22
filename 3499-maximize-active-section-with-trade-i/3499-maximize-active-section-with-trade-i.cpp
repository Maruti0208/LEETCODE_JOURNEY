class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {

        int i = 0;
        vector<int> vcc;
        int n = s.size();
        int one = 0;

        while (i < n) {
            if (s[i] == '1') {
                while (s[i] == '1') {
                    one++;
                    i++;
                }
            } else {
                int cnt = 0;
                while (s[i] == '0') {
                    i++;
                    cnt++;
                }
                vcc.push_back(cnt);
            }
        }

        if (vcc.size() < 2)
            return one;

        int maxi = INT_MIN;

        for (int i = 1; i < vcc.size(); i++)
            maxi = max(maxi, vcc[i] + vcc[i - 1]);

        return maxi + one;
    }
};