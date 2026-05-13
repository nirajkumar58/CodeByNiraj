class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        for(int i=0; i<n; i++){
            string t=to_string(nums[i]);
            for(int i=0; i<t.size(); i++){
                int temp=t[i]-'0';
                res.push_back(temp);
            }
        }
        return res;
    }
};