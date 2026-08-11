class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        if (a.size() > b.size())
            return findMedianSortedArrays(b, a);
        int m = a.size();
        int n = b.size();
        int l = 0, h = m;
        while (l <= h) {
            int pa = (l + h) / 2;
            int pb = (m + n + 1) / 2 - pa;
            int la = (pa == 0) ? INT_MIN : a[pa - 1];
            int ra = (pa == m) ? INT_MAX : a[pa];
            int lb = (pb == 0) ? INT_MIN : b[pb - 1];
            int rb = (pb == n) ? INT_MAX : b[pb];
            if (la <= rb && lb <= ra) {
                if ((m + n) % 2)
                    return max(la, lb);
                return (max(la, lb) + min(ra, rb)) / 2.0;
            } else if (la > rb)
                h = pa - 1;
            else
                l = pa + 1;
        }
        return 0;
    }
}

;