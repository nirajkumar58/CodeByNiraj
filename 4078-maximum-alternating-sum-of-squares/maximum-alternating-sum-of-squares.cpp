class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> v;
        int n=nums.size();
        for(int i=0; i<n; i++){
            v.push_back(1LL*nums[i]*nums[i]);
        }
        sort(v.begin(),v.end());
        long long left=0;
        long long right=0;
        for(int i=0; i<n/2; i++){
            right+=v[i];
        }
        for(int i=(n)/2; i<n; i++){
            left+=v[i];
        }
        
        return left-right;
    }
};