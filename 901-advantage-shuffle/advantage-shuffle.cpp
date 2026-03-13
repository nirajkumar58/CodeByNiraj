class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,vector<int>>m;
        vector<int>a;
        a=nums1;
        sort(nums1.begin(),nums1.end());
        vector<int>b;
        b=nums2;
        sort(nums2.begin(),nums2.end());
        int x=0;
        int y=0;
        vector<int>f;
        while(y<nums2.size() && x<nums1.size()){
            if(nums1[x]>nums2[y]){
                m[nums2[y]].push_back(nums1[x]);
                x++;
                y++;
            }
            else{
                f.push_back(nums1[x]);
                x++;
            }
        }
        int o=0;
        for(int i=y;i<nums2.size();i++){
            
            m[nums2[i]].push_back(f[o]);
            o++;
        }
        
        vector<int>res;
        for(int i : b){
            res.push_back(m[i].back());
            m[i].pop_back();
        }
        return res;
    }
};
