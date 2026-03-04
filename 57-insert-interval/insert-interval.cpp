#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        int m=intervals.size();
        vector<int> help=intervals[0];
        vector<vector<int>> res;
        for(int i=0; i<m; i++){
            int st=intervals[i][0];
            int end=intervals[i][1];
            if(max(st,help[0])<=min(end,help[1])){
                help[0]=min(help[0],st);
                help[1]=max(help[1],end);
            }
            else{
                res.push_back(help);
                help=intervals[i];

            }
        }
        res.push_back(help);
        return res;
    }
};