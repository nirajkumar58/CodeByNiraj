class Solution {
public:
    int countBattleships(vector<vector<char>>& b) {
        int m=b.size();
        int n=b[0].size();
        int cnt=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(b[i][j]=='.') continue;
                if(i>0 && b[i-1][j]=='X') continue;
                if(j>0 && b[i][j-1]=='X') continue;
                cnt++;
            }
        }
        return cnt++;
    }
};