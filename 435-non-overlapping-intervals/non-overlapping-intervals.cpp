class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& v) {
        int n=v.size();
        // vector<int> help=v[0];
        sort(v.begin(),v.end(), [](auto &a, auto &b){
            return a[1]<b[1];
        });
 vector<int> help=v[0];
        int cnt=0;
        for(int i=1; i<n; i++){
            int st=v[i][0];
            int end=v[i][1];
            if(max(st,help[0])<min(end,help[1])){
            cnt++;
            // help[0]=min(help[0],st);/
            }
            else{
                // cnt++;
                help=v[i];
            }

        }
        return cnt;
    }
};