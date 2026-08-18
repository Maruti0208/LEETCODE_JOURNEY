class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& m) {
        int n = m.size();
        int h = m[0].size();
        vector<vector<int>> ans(n, vector<int>(h, 0));
        queue < pair<pair<int, int>, int>> q;
        vector<vector<int>> v(n, vector<int>(h, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < h; j++) {
                if (m[i][j] == 0) {
                    q.push({{i, j}, 0});
                    v[i][j]=1;
                }
            }
        }
        int dr[] = {1, 0, -1, 0};
        int dc[] = {0, 1, 0, -1};
        while (!q.empty()) {
            int r= q.front().first.first;
            int c= q.front().first.second;
            int a=q.front().second;
            q.pop();
            ans[r][c]=a;
           
            for(int i=0;i<4;i++){
             int t=   r+dr[i];
            int y=    c+dc[i];
            if(t>=0 && t<n && y>=0 && y<h && v[t][y]==0){
                v[t][y]=1;
                q.push({{t,y},a+1});
             
            }

            }
        }
        return ans;
    }
};