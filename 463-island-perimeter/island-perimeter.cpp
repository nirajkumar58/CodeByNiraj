class Solution {
public:
    int islandPerimeter(vector<vector<int>>& v) {
        if(v.empty()|| v[0].empty()) return 0;
        int m=v.size();
        int n=v[0].size();
        int ans=0;
        vector<int> dr{0,0,1,-1};
        vector<int> dc{1,-1,0,0};
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(v[i][j]==1){
                    ans+=4;
                    for(int k=0; k<4; k++){
                        int r=i+dr[k];
                        int c=j+dc[k];
                        if(r>=0 && r<m&&c>=0&&c<n&&v[r][c]==1){
                            ans-=1;
                        }
                    }
                }
            }
        }
        return ans;
    }
};