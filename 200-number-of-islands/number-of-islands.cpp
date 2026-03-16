class Solution {
    void bfs(queue<pair<int,int>> q, vector<vector<char>>& grid, vector<vector<bool>>& vis){
        int m=grid.size();
        int n=grid[0].size();
        vector<int> dr={0,0,-1,1};
        vector<int> dc={1,-1,0,0};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int rr=r+dr[i];
                int rc=c+dc[i];
                if(rr>=0 && rc>=0 &&rr<m&&rc<n &&vis[rr][rc]==false &&grid[rr][rc]=='1'){
                    q.push({rr,rc});
                    vis[rr][rc]=true;
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>> q;
        vector<vector<bool>> vis(m, vector<bool> (n,false));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    count++;
                    q.push({i,j});
                    bfs(q,grid,vis);
                }
            }
        }
        return count;

    }
};