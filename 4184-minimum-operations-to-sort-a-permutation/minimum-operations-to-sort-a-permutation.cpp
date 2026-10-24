class Solution {
public:
    int minOperations(vector<int>& v) {
        int n=v.size();
        bool check1=false,check2=false;
        for(int i=1; i<n; i++){
            if(v[i]!=(v[i-1]+1)%n) check1=true;
            if(v[i]!=(v[i-1]-1+n)%n) check2=true;
        }
        if(check1 && check2) return -1;
        if(v[0]==0 && v[n-1]==n-1)return 0;
        int k=v[0];
        return min(k+2,n-k);
    }
};