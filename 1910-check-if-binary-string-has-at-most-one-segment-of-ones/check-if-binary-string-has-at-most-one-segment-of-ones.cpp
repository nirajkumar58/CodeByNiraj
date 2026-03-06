class Solution {
public:
    bool checkOnesSegment(string s) {
        
        int ones=0;
        int n=s.size();
        bool check=false;

        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                ones++;
            }else{
                ones=0;
                check=true;
            }
            if(check==true&&s[i]=='1') return false;
        }
        return true;
    }
};