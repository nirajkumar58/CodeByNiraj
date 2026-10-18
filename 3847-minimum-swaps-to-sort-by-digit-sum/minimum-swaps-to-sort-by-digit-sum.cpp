class Solution {
    int fnc(int a){
        int c=0;
        while(a>0){
        c+=a%10;
        a=a/10;
        }
        return c;
    }
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<int> v=nums;
        auto cmp=[&](int a, int b){
            int c=fnc(a);
            int d=fnc(b);
            if(c!=d) return c<d;
            else return a<b;
            };
        sort(v.begin(),v.end(),cmp);
       unordered_map<int,int> mp;
       int cnt=0;
       for(int i=0; i<n; i++){
        mp[nums[i]]=i;
       }
       // 16 34 43 18 
       // 18 43 34 16
       for(int i=0; i<n; i++){
            if(nums[i]!=v[i]){
                cnt++;
                int j=mp[v[i]];
                swap(nums[mp[v[i]]],nums[i]);
                mp[nums[j]]=j;
                mp[nums[i]]=i;
            }
       }
       return cnt;
    }
};