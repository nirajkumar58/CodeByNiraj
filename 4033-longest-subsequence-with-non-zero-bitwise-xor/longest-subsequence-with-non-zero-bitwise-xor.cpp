class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xo=0;
        int n=nums.size();
        bool all=false;
        for(int i=0; i<n; i++){
            xo=xo^nums[i];
            if(nums[i]!=0) all=true;
        }
        if(xo!=0) return n;
        else if(!all) return 0;
        else return n-1;
    }
};