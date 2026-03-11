class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0;
        int i=0; 
        if(n==0) return 1;
        while(n>0){
            if(n&1) ans+=pow(2,i)*0;
            else ans+=pow(2,i);
            n>>=1;
            i++;
        }
        return ans;
    }
};