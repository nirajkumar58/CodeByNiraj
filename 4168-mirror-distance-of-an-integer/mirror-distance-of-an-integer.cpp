class Solution {
public:
    int mirrorDistance(int n) {
       int k=n;
       int a=0;
       while(k>0){
        int temp=k%10;
        a=a*10+temp;
        k=k/10;
       }
       return abs(a-n);
    }
};