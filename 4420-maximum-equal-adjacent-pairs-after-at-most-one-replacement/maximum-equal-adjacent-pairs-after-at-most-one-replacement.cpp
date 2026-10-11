class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        map<pair<int,int>, int> mp;
        int ans=0;
        int n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[i-1]==nums[i]) ans++;
            else{
            mp[{nums[i-1],nums[i]}]++;
            mp[{nums[i],nums[i-1]}]++;
            }
        }
        int t=0;
        for(auto [k,v]:mp){
            t=max(t,v);
        }
        return t+ans;
    }
};