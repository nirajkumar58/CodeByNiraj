class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        map<int,int> mp;
        for(int i=1; i*i*i<=n; i++){
            for(int j=i+1; j*j*j<=n; j++){
                long long a=i*i*i;
                long long b=j*j*j;
                if(a+b<=n)
                mp[a+b]++;
            }
        }
        vector<int> t;
        for(auto [k,v]:mp){
            if(v>=2){
                t.push_back(k);
            }
        }
        sort(t.begin(),t.end());
        return t;
    }
};