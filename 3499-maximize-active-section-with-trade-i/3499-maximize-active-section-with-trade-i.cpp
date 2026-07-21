class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {

        s = "1" + s + "1";    

        int n = s.length();
        int o = 0;

        for (char c : s)
            if (c == '1')
                o++;

        o -= 2;          
        int ans = o;

        int i = 0;

        while (i < n) {

            if (s[i] == '0') {

                int po1 = 0, no1 = 0, po2 = 0;

                while (i < n && s[i] == '0') {
                    po1++;
                    i++;
                }

                while (i < n && s[i] == '1') {
                    no1++;
                    i++;
                }
                int t=i;
                while (i < n && s[i] == '0') {
                    po2++;
                    i++;
                }

                if (po1 > 0 && no1 > 0 && po2 > 0) {
                    ans = max(ans, o + po1 + po2);
                }
                i=t;

            } else {
                i++;
            }
        }

        return ans;
    }
};