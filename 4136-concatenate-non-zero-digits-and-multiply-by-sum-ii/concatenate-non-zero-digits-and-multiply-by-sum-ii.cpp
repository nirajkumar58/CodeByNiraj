class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& q) {
        long long t=0;
        int n=s.size();
        int cnt=0;
        vector<long long> pw(n+1,1);
        long long cn=1e9+7;
        for(int i=1; i<=n; i++)
        pw[i] = (pw[i-1]*10) %cn;
        vector<long long> ts(n),len(n);
        vector<long long> sum(n);
        long long add=0;
        for(int i=0; i<n; i++){
            if(s[i]!='0'){
            t = (t*10+(s[i]-'0'))%cn;
            cnt++;
            add+=s[i]-'0';
            }
            ts[i]=t;
            len[i]=cnt;
            sum[i]=add;
        }
        for(int i=0; i<n; i++) cout<<ts[i]<<" ";
        cout<<endl;
        vector<int> res;
        for(int i=0; i<q.size(); i++){
            int l=q[i][0];
            int r=q[i][1];
            long long x=0;
            long long mul=sum[r];
            long long gap=len[r];
            if(l-1>=0)
            mul-=sum[l-1],x=ts[l-1]%cn,gap-=len[l-1];
            long long y=ts[r]%cn;
            // cout<<x<<" "<<y<<endl;
            long long b=0;
            // cout<<len[r]<<" "<<len[l]<<" "<<gap<<endl;
            b = (y-(x*pw[gap])%cn+cn) %cn;
            // cout<<b<<" "<<mul<<endl;
            int ans=(mul%cn)*(b%cn)%cn;
            res.push_back(ans);

        }
        return res;
    }


};