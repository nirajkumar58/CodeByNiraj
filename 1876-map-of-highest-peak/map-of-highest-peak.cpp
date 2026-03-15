class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
      vector<vector<int>> res(n,vector<int>(m,-1));
      queue<pair<pair<int,int>,int>> q;
      vector<vector<bool>> vis(n,vector<bool>(m,false));
      for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]==1){
                q.push({{i,j},0});
                vis[i][j]=true;
                res[i][j]=0;
            }
        }
      }
      vector<int> dr={0,0,-1,1};
      vector<int> dc={-1,1,0,0};
      while(!q.empty()){
        int row=q.front().first.first;
        int col=q.front().first.second;
        int d=q.front().second;
        q.pop();
        res[row][col]=d;
        for(int i=0; i<4; i++){
            int cr=row+dr[i];
            int cc=col+dc[i];
            if(cr>=0 && cc>=0&& cr<n&&cc<m&&vis[cr][cc]==false&&v[cr][cc]!=1){
                 vis[cr][cc]=true;
                q.push({{cr,cc},d+1});
                // vis[cr][cc]=true;
            }
        }
      }
      return res;
    }
};