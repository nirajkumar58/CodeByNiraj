class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product =1;
        int k=n;
        while(k>0){
            int t=k%10;
            sum+=t;
            product*=t;
            k=k/10;
        }
        cout<<sum<<" "<<product;
        if(n%(sum+product)!=0) return false;
        return true;
    }
};