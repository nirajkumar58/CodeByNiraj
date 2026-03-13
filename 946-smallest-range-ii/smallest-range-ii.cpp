class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        int ans = 1e4 + 1; int n = nums.size();
        sort(nums.begin(), nums.end());
        ans = nums[n - 1] - nums[0];
        int x = nums[n - 1] - nums[0] - 2 * k;
        for(int i = 0; i < n - 1; i++){
            int y = nums[i + 1] - nums[i] - 2 * k;
            int z = nums[i] - nums[0];
            int t = nums[n - 1] - nums[i + 1];
            int d = max(max(z, t), abs(y));
            ans = min(ans, max(d, abs(x)));
        }
        return ans;
    }
};