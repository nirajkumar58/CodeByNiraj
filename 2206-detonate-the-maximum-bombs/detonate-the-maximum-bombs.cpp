class Solution {
void dfs(int i, unordered_map<int,bool> &vis, unordered_map<int,vector<int>> &adj, int &cnt){
    cnt++;
    vis[i]=true;
    for(auto j:adj[i]){
        if(!vis[j]){
            dfs(j,vis,adj,cnt);
        }
    }
}
public:
    int maximumDetonation(vector<vector<int>>& v) {
        int n=v.size();
        unordered_map<int,vector<int> > adj;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j) continue;
                 long long  x1=v[i][0];
                 long long  y1=v[i][1];
                 long long  r1=v[i][2];
                 long long  x2=v[j][0];
                 long long  y2=v[j][1];
                 long long  r2=v[j][2];
                long long dis=((x2-x1)*(x2-x1)*1LL+(y2-y1)*(y2-y1)*1LL)*1LL;
                if(r1*r1*1LL>=dis){
                    adj[i].push_back(j);
                }
            }
        }
        // unordered_map<int,bool> vis;
        int res=0;
        for(int i=0; i<n; i++){
            int cnt=0;
            unordered_map<int,bool> vis;
            dfs(i,vis,adj,cnt);
            res=max(res,cnt);
        }
        return res;
    }
};