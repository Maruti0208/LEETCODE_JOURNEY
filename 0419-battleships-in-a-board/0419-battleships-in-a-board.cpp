class Solution {
public:
    int ans=0;
void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis) {
    int m = grid.size();
    int n = grid[0].size();

    
    if (i < 0 || i >= m || j < 0 || j >= n)
        return;

   
    if (vis[i][j] || grid[i][j] == '.')
        return;

    vis[i][j] = 1;

     
    dfs(i + 1, j, grid, vis);
    dfs(i - 1, j, grid, vis);
    dfs(i, j + 1, grid, vis);
    dfs(i, j - 1, grid, vis);
}
    int countBattleships(vector<vector<char>>& board) {
        int n= board.size();
        int m= board[0].size();
        vector<vector<int>>  v(n, vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(board[i][j]=='X' && !v[i][j]){
                 dfs(i,j,board,v);
               ans++;}
            }
            
        }
        return ans;

    }
};