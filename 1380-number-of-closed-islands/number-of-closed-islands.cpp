class Solution {
    bool dfs(int m, int n, vector<vector<int>>& grid, int i, int j){
        if(i<0 || j<0 || i>=m || j>=n){
            return false;
        }
        if(grid[i][j]==1) return true;
        grid[i][j]=1;
        bool a=dfs(m,n,grid,i-1,j);
        bool b=dfs(m,n,grid,i,j-1);
        bool c=dfs(m,n,grid,i+1,j);
        bool d=dfs(m,n,grid,i,j+1);
        return a&&b&&c&&d;
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
         for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==0 && dfs(m,n,grid,i,j)==true){
                    cnt++;
                }
            }
         }
         return cnt;
    }
};