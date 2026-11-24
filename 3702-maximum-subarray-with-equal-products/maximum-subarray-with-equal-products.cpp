class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return 2;
        int ans=2;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                long long pr=1;
                long long l=1,gc=1;
                for(int k=i; k<=j; k++){
                    pr*=(1LL)*nums[k];
                    l=lcm(l,nums[k]);
                    gc=gcd(gc,nums[k]);
                    int t=l*gc;
                if(pr>t){
                    break;
                }
                }
            int t=l*gc;
                if(pr==t){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};