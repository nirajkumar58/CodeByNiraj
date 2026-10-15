class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                unordered_set<int> s;
                for(int k=i; k<=j; k++){
                    s.insert(nums[k]);
                }
                int t=s.size();
                res+=t*t;
            }
        }
        return res;
    }
};