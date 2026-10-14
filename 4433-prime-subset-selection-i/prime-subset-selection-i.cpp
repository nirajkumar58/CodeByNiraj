class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<int> v;
        vector<bool> prime(n+1,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2; i*i<=n; i++){
            if(prime[i]){
                for(int j=i*i; j<=n; j+=i){
                    prime[j]=false;
                }
            }
        }
        for(int i=0; i<=n; i++){
            if(prime[i]==true){
                v.push_back(i);
                // cout<<i<<" ";
            }
        }
        vector<int> res;
        int sum=0;
        for(int i=0; i<v.size(); i++){
            sum+=v[i];
            if(sum<=s){
                res.push_back(v[i]);
            }else break;
        }
        return res;

        
    }
};