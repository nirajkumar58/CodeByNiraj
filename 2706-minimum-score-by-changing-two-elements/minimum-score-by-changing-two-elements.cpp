class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        // vector<int> d;
        // bool check=false;
        // int cnt=0;
        // for(int i=0; i<n-1; i++){
        //     int t=abs(nums[i]-nums[i+1]);
        //     d.push_back(t);
        //     if(t==0)check=true;
        //     if(t>0) cnt++;
        // }
        // 1 4 5 7 8 -> 2 1 2 1 -> 7 4 3
        // 9 27 33 59 81 -> 58 42 8 75 28 
        if(n==3) return 0;
        int mini=INT_MAX;
        int c=0;
        mini=min(abs(nums[0]-nums[n-3]),mini);
        mini=min(mini,abs(nums[2]-nums[n-1]));
        mini=min(mini,abs(nums[1]-nums[n-2]));
        return mini;

    }
};