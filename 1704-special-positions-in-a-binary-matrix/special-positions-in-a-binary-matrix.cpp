class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int cnt=0;
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==1){
                    bool check=true;
                    for(int k=0; k<m; k++){
                       if(k==i) continue;
                        else if(mat[k][j]!=0){
                            check=false;
                        }
                    }
                    if(!check) break;
                     for(int k=0; k<n; k++){
                       if(k==j) continue;
                        else if(mat[i][k]!=0){
                            check=false;
                        }
                    }
                    if(check) cnt++;
                }

            }
        }
        return cnt;
    }
};