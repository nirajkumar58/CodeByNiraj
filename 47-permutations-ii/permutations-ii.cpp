class Solution {
    void fnc(vector<int> &nums, set<vector<int>> &st, int n, int i){
        if(i==n){
            st.insert(nums);
            return;
        }
        vector<int> v;
        for(int j=i; j<n; j++){
            swap(nums[i],nums[j]);
            fnc(nums,st,n,i+1);
            swap(nums[i],nums[j]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> st;
        fnc(nums,st,n,0);
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};