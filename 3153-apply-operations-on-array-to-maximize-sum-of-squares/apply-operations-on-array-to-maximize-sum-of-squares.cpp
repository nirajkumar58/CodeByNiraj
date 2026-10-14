class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        vector<int> v(32,0);
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<32; j++){
                if(nums[i]&(1<<j)){
                    v[j]++;
                }
            }
        }
        int mod=1e9+7;
        long long res=0;
        while(k--){
            long long curr=0;
            for(int i=0; i<32; i++){
                if(v[i]>0){
                    curr=(curr|(1<<i));
                    v[i]--;
                }
            }
            res=res%mod;
            res+=1LL*(curr*curr%mod)%mod;
            res=res%mod;
        }
        return res;
    }
};