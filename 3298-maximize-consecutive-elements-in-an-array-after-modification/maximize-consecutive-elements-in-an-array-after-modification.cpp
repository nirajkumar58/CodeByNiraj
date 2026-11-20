class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0; i<n; i++){
            mp[nums[i]+1]=mp[nums[i]]+1;
            mp[nums[i]]=mp[nums[i]-1]+1;
            ans=max({mp[nums[i]+1],mp[nums[i]],ans});
        }
        return ans;
    }
};