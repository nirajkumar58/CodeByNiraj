class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> temp;
        for(int i=0; i<m; i++){
            int zeros=0;
            for(int j=n-1; j>=0; j--){
                if(grid[i][j]==0){
                    zeros++;
                }
                else{
                    break;
                }
            }
            temp.push_back(zeros);
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            int need=n-i-1;
            int j=i;
            while(j < n && temp[j] < need) {
                j++;
            }

            if(j == n) {
                return -1;
            }

            cnt += j-i;

            while(j > i) {
                swap(temp[j], temp[j-1]);
                j--;
            }
        }
    return cnt;
    }
};