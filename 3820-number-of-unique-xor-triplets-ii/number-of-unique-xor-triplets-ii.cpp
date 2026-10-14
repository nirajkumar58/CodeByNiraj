class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> s;
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int temp=nums[i]^nums[j];
                s.insert(temp);
            }
        }
        vector<int> v(s.begin(),s.end());
        unordered_set<int> t;
        for(int i=0; i<n; i++){
           for(int j=0; j<v.size(); j++){
                 int temp=v[j]^nums[i];
                t.insert(temp);
            }
        }
        return t.size();
    }
};