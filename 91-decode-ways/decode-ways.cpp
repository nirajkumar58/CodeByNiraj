class Solution {
    int fnc(string &s, vector<int> &dp, int n, int i){
        if(i==n) return 1;
        if(s[i]=='0') return 0;
        if(dp[i]!=-1) return dp[i];
        int ans=fnc(s,dp,n,i+1);
        if(i+1<n && (s[i]=='1'||(s[i]=='2'&&s[i+1]<='6'))){
            ans+=fnc(s,dp,n, i+2);
        }
        return dp[i]=ans;
    }
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(n+1,-1);
        return fnc(s,dp,n,0);
    }
};