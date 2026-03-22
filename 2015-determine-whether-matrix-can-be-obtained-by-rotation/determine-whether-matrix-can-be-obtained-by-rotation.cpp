class Solution {
    void rotate(vector<vector<int>>& mat){
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0; i<m; i++){
            for(int j=i; j<n; j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0; i<m; i++){
            reverse(mat[i].begin(),mat[i].end());
        }
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
       rotate(mat);
        if( mat==target) return true;
        rotate(mat);
        if( mat==target) return true;
        rotate(mat);
        if( mat==target) return true;
        rotate(mat);
        return mat==target;
    }
};