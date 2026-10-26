class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int res=0;
        vector<int> rc={0,0,-1,1};
        vector<int> rr={-1,1,0,0};
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int area=0;
                queue<pair<int,int>> pq;
                if(grid[i][j]==0) continue;
                pq.push({i,j});
                while(!pq.empty()){
                int a=pq.front().first;
                int b=pq.front().second;
                pq.pop();
                area+=grid[a][b];
                grid[a][b]=0;
                for(int k=0; k<4; k++){
                    int r=rr[k]+a;
                    int c=rc[k]+b;
                    if(r>=0 && c>=0 && r<m && c<n && grid[r][c]!=0){
                        area+=grid[r][c];
                        grid[r][c]=0;
                        pq.push({r,c});
                    }
                }
            }
            res=max(res,area);
            }
        }
        return res;
    }
};