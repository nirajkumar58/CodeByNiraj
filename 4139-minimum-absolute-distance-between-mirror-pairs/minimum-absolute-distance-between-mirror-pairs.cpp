class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        int n=nums.size();
        reverse(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        int dis=INT_MAX;
        for(int i=0; i<n; i++){
            int temp=0;
            int k=nums[i];
            if(k == 0) temp = 0;
            while(k>0){
                int a=k%10;
                temp=temp*10+a;
                k=k/10;
            }
            if(mp.find(temp)!=mp.end()) {
                dis = min(dis,abs(i-mp[temp]));
            }
            mp[nums[i]] = i;
        }
        if(dis==INT_MAX) return -1;
        else return dis;
    }
};