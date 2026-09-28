class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int ans=INT_MAX;
        vector<int> p(n);
        vector<int> s(n);
        p[0]=nums[0];
        for(int i=1; i<n; i++){
            p[i]=p[i-1]+nums[i];
            if(p[i]==x){
                ans=min(ans,i+1);
            }
        }
        s[n-1]=nums[n-1];
        if(s[n-1]==x||p[0]==x) return 1;
        for(int i=n-2; i>=0; i--){
            s[i]=s[i+1]+nums[i];
             if(s[i]==x){
                ans=min(ans,n-i);
            }
        }
        reverse(s.begin(),s.end());
        for(int i=0; i<n; i++){
            int temp=x-p[i];
            if(temp<0){
                break;
            }
            int j=lower_bound(s.begin(),s.end(),temp)-s.begin();
            // int k=n-j+1+i;
            // cout<<k<<" ";
            // if(k>n) break;
            if(j<n && s[j]==temp){
                ans=min(ans,j+i+2);
                // break;
            }
        }
        if(ans==INT_MAX||ans>n) return -1;
        return ans;
    }
};