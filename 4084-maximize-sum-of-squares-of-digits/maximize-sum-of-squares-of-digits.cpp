class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int n=0;
        string res="";
        while(num>0){
            int t=0;
            if(sum<=9){
                t=sum;
                sum-=t;
            }else if(num>1){
                t=9;
                sum-=t;
            }
            res+=to_string(t);
            num--;
        }
        if(res=="0" || sum!=0) return "";
        return res;
    }
};