class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
        stack<pair<long long,long long>> st;
        long long ans=0;
        long long total=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            while(!st.empty()&&st.top().first>nums[i]){
                total-=st.top().second;
                st.pop();
            }
            if(st.empty()){
                st.push({nums[i],1});
                total++;
            }else if(st.top().first==nums[i]){
                int a=st.top().first;
                int b=st.top().second;
                st.pop();
                st.push({a,b+1});
                total++;
                ans+=total-b-1;
            }
            else{
                st.push({nums[i],1});
                ans+=total;
                total++;
            }
            // ans+=st.size();
            // st.push(nums[i]);
        }
        return ans;
    }
};