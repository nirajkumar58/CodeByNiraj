class Solution {
public:
    int minimumPushes(string s) {
        map<char,int> mp;
        int n=s.size();
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        vector<int> v;
        for(auto [k,va]:mp){
            v.push_back(va);
        }
        sort(v.rbegin(),v.rend());
        int i=0; 
        int res=0;
        while(i<8 && i<v.size()){
            res+=v[i];
            i++;
        }
        while(i<16 && i<v.size()){
            res+=2*v[i];
            i++;
        }
         while(i<24 && i<v.size()){
            res+=3*v[i];
            i++;
        }
        while(i<26 && i<v.size()){
            res+=4*v[i];
            i++;
        }
        return res;

    }
};