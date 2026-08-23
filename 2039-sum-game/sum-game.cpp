class Solution {
public:
    bool sumGame(string s) {
       int fcnt=0,scnt=0;
       int fsum=0,ssum=0;
       int n=s.size();
        for(int i=0; i<(n+1)/2; i++){
            if(s[i]=='?') fcnt++;
            else{
                fsum+=s[i]-'0';
            }
            if(s[n-i-1]=='?') scnt++;
            else{
                ssum+=s[n-i-1]-'0';
            }
        }
        // cout<<fcnt<<" "<<scnt<<" "<<ssum<<" "<<fsum<<" "<<(fsum-ssum);
        int t=(scnt-fcnt)/2;
        if((fsum-ssum)!=t*9||(fcnt+scnt)%2==1) return true;
        return false;
    }
};