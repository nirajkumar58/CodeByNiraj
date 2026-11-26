class Solution {
public:
    bool canAliceWin(int n) {
        bool check=true;
        int c=10;
        while(n>0 && c>0){
            if(n>=c)
            n-=c;
            else break;
            check=!check;
            c--;
        }
        if(check) return false;
        else return true;
    }
};