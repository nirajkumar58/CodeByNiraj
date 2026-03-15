class Solution {
    int fnc(vector<int> &nums, int target,   vector<vector<int>>& dp, int i, int n){
        if(target ==0) return 1;
        if(i>=n||target<0) return 0;
        if(dp[i][target]!=-1) return dp[i][target];
        int take=fnc(nums,target-nums[i],dp,0,n);
        int notake=fnc(nums,target,dp,i+1,n);
        dp[i][target]=take+notake;
        return dp[i][target];
    }
public:
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int> (target+1,-1));
        return fnc(nums, target, dp, 0, n);
    }
};