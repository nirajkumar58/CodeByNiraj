class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        map<string,int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
       const int t=nums[0].size();
        for(int i=0; i<(1<<t); i++){
            string s = bitset<16>(i).to_string();
            s = s.substr(16-t); 
            if(mp[s]==0) return s;
        }
        return "";
    }
};