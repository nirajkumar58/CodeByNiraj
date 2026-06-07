class Solution {
    int fnc(int i, int j, int n, vector<vector<int>> & dp, vector<vector<int>>& v){
        if(j<0 || j>=n) return INT_MAX/2;
        if(i==n-1) return v[i][j];
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        // int a=101,b=101,c=101;
       int a=v[i][j]+fnc(i+1,j-1,n,dp,v);
       int b=v[i][j]+fnc(i+1,j,n,dp,v);
       int c=v[i][j]+fnc(i+1,j+1,n,dp,v);
        return dp[i][j]=min({a,b,c});
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        int ans=INT_MAX;
        for(int i=0; i<n; i++){
            ans=min(ans,fnc(0,i,n,dp,matrix));
        }
        return ans;
    }
};