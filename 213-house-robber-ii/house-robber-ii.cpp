class Solution {
    int fnc(vector<int>& nums,vector<int>& dp,int m,int i){
        if(i>=m){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int steal = nums[i]+fnc(nums,dp,m,i+2);
        int skip = fnc(nums,dp,m,i+1);
        dp[i] = max(steal,skip);
        return dp[i];
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }\

        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);
        vector<int> nums1(n-1);
        vector<int> nums2(n-1);
        for(int i=1; i<n; i++){
            nums1[i-1] = nums[i];
        }
        for(int i=0; i<n-1; i++){
            nums2[i] = nums[i];
        }
        int m = n-1;
        return max(fnc(nums1,dp1,m,0),fnc(nums2,dp2,m,0));
    }
};