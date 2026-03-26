class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        vector<long long> h;
        vector<long long> v;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0; i<m; i++){
            long long sum=0;
            for(int j=0; j<n; j++){
                sum+=grid[i][j];
            }
            h.push_back(sum);
        }
        for(int i=0; i<n; i++){
            long long sum=0;
            for(int j=0; j<m; j++){
                sum+=grid[j][i];
            }
            v.push_back(sum);
        }
        long long sum=0;
        for(int i=0; i<h.size(); i++) sum+=h[i];
        long long currsum=0;
        for(int i=0; i<h.size(); i++){
            // int temp=sum-
            currsum+=h[i];
            // sum-=currsum;
            if(sum-currsum==currsum) return true;
        }
         sum=0;
        for(int i=0; i<v.size(); i++) sum+=v[i];
         currsum=0;
        for(int i=0; i<v.size(); i++){
            // int temp=sum-
            currsum+=v[i];
            // sum-=currsum;
             if(sum-currsum==currsum) return true;
        }
        return false;
    }
};