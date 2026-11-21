class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int mod=1e9+7;
        int even=1,odd=0,sum=0,ans=0,n=arr.size();
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum%2==1){
                ans=(ans+even)%mod;
                odd++;
            }else{
                ans=(ans+odd)%mod;
                even++;
            }
        }
        return ans;
    }
};