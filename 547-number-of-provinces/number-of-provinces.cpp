class Solution {
void dfs(unordered_map<int,bool>& vis,unordered_map<int,vector<int>> adj, int i ){
    vis[i]=true;
    for(auto j:adj[i]){
        if(!vis[j]){
            dfs(vis,adj,j);
        }
    }
}
public:
    int findCircleNum(vector<vector<int>>& v) {
        unordered_map<int,vector<int>> adj;
        int n=v.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(v[i][j]==1&&i!=j){
                    adj[i].push_back(j);
                }
            }
        }
        int cnt=0;
        unordered_map<int,bool> vis;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                cnt++;
                dfs(vis,adj,i);
            }
        }
        return cnt;
    }
};