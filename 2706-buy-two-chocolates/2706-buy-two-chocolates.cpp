class Solution {
public:
    int buyChoco(vector<int> p, int m) {
        int ans = INT_MAX;

        sort(p.begin(), p.end());
        int i = 0;
        int j = p.size() - 1;
        
             if( (m >= p[1] + p[0]))  return (m - p[1] - p[0]);
             return m;
                
    }
};