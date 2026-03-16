class Solution {
    bool bfs(vector<vector<int>>& graph,vector<int>& color,int i){
        queue<int> q;
        q.push(i);
        color[i]=0;
        while(!q.empty()){
            int t=q.front(); q.pop();
            for(auto adj:graph[t]){
                if(color[adj]==-1){
                    color[adj]=!color[t];
                    q.push(adj);
                }
                else if(color[adj]==color[t]){
                    return false;
                }
            }
        }
        return true;

    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);
        for(int i=0; i<n; i++){
            if(color[i]==-1){
                if(!bfs(graph,color,i)) return false;
            }
        }
        return true;
    }
};