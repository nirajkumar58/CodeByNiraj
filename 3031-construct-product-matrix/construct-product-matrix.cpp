class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int  n=grid.size();
        int mod=12345;
        int m=grid[0].size();
        vector<vector<int>> p(n,vector<int>(m));
        long long suffix=1;
        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
                p[i][j]=suffix;
              suffix = (suffix * grid[i][j]) % mod;
            }
        }
        vector<vector<int>> s(n,vector<int>(m));
        long long prefix=1;
            for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                s[i][j]=prefix;
                prefix = (prefix * grid[i][j]) % mod;
            }
        }
        // vector<vec
        
          for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                grid[i][j]=(p[i][j]*s[i][j])%mod;
            }
        }
        return grid;
    }
};