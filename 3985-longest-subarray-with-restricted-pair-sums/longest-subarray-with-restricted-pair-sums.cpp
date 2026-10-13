class Solution {
    bool isvalid(int i, unordered_map<int,int>& mp){
         for(auto [k,v]:mp){
                int a=i+k;
                int b=i-k;
                if(mp.count(a)){
                    return false;
                }
                if(b>0&&mp.count(b)){
                    if(b!=k ||v>1)
                     return false;
                }
            }
            return true;
    }
public:
    int maxSubarray(vector<int>& nums) {
         int n=nums.size();
         unordered_map<int,int> mp;
         int i=0,j=0,ans=0;
         while(j<n){
            if(isvalid(nums[j],mp)){
                mp[nums[j]]++;
                j++;
            }else{
           if(--mp[nums[i]]==0)
                    mp.erase(nums[i]);
                i++;
            }
            ans=max(ans,j-i);
            // j++;
         }
         return ans;
    }
};