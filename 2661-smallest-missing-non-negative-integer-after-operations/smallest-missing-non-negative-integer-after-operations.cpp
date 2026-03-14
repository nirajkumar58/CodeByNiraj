class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n = nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int rem =(nums[i]%value+value)%value;
            mp[rem]++;
        }

        int i=0;
        while(true){
            if(mp[i%value]>0){
                mp[i%value]--;
                i++;
            }
            else{
                return i;
            }
        }
    }
};