class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int> v(1e5+1,0);
        int n=nums1.size();
        for(int i=0; i<n; i++){
            int t=abs(nums1[i]-nums2[i]);
            v[t]++;
        }
        int cnt=k1+k2;
        for(int i=1e5; i>=1&&cnt>0; i--){
            int t=min(cnt,v[i]);
            if(t==0) continue;
            v[i-1]=v[i-1]+t;
            if(cnt>=v[i])
            v[i]=0;
            else v[i]=v[i]-t;
            cnt-=t;
        }
        long long ans=0;
        for(int i=0; i<1e5+1; i++){
            if(v[i]!=0){
                ans+=1LL*i*i*v[i];
            }
        }
        return ans;
    }
};