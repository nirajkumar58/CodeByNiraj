class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        int n=nums.size();
        // long long ans=0;
        int t=k;
        long long cnt=0;
        for(int i=0; i<n; i++){
            if(nums[i]<=t){
                t-=nums[i];
            }else{
                int temp=(nums[i]-t+k-1)/k;
                // cout<<temp<<endl;
                cnt+=temp;
                t+=k*temp;
                t-=nums[i];
            }
        }
        int mod=1e9+7;
        long long a=cnt;
        long long b=cnt +1;

        if(a%2==0) a/=2;
        else b/=2;

        long long ans=(a%mod)*(b%mod)%mod;
        return ans;
    }
};