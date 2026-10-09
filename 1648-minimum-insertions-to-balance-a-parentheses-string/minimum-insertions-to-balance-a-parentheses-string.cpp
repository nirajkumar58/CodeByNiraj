class Solution {
public:
    int minInsertions(string s) {
        int cnt=0,res=0;
        int n=s.size();
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                if(cnt%2==1){
                    res++;
                    cnt--;
                }
                cnt+=2;
            }else{
                cnt--;
                if(cnt<0){
                    res++;
                    cnt=1;
                }
            }
        }
        return cnt+res;
    }
};