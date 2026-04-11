class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        int n=nums.size();
        int dis=INT_MAX;
        for(int i=0; i<n; i++){
            mp[nums[i]].push_back(i);
            if(mp[nums[i]].size()==3){
                int one=mp[nums[i]][0];
                int two=mp[nums[i]][1];
                int three=mp[nums[i]][2];
                dis=min(dis,abs(one-two)+abs(two-three)+abs(three-one));
                mp[nums[i]].erase(mp[nums[i]].begin());
            }
        }
        if(dis==INT_MAX) return -1;
        return dis;
        
    }
};