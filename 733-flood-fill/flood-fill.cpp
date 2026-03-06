class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& v, int sr, int sc, int color) {
        if(v[sr][sc]==color) return v;
        queue<pair<int,int>> q;
        int temp=v[sr][sc];
        q.push({sr,sc});
        int m = v.size();
        int n = v[0].size();
        vector<int> dr{0,0,1,-1};
        vector<int> dc{1,-1,0,0};
        vector<vector<int>> vis(m,vector<int>(n,0));
        vis[sr][sc]=1;
        while(!q.empty()){
            auto t=q.front();
            int r=t.first;
            int c=t.second;
            v[r][c]=color;
            q.pop();
            for(int i=0; i<4; i++){
                int row=r+dr[i];
                int col=c+dc[i];
                if(row>=0 && row<m && col>=0 && col<n && v[row][col]==temp && vis[row][col]==0){
                    q.push({row,col});
                    vis[row][col]=1;
                }
            }

        }
        return v;
    }
};