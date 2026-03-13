class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        if(n<2) return n;
        sort(points.begin(),points.end());
        vector<int> temp = points[0];
        int count = 0;
        for(int i=1;i<n;i++){
            if(points[i][0]<=temp[1]){
                temp[0] = points[i][0];
                temp[1] = min(points[i][1],temp[1]); 
            } else {
                count++;
                temp = points[i];
            }
        }
        return count+1;
    }
};