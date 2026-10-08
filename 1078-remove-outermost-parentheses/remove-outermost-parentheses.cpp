class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        string res="";
        int cnt=0;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                cnt++;
                if(cnt!=1){
                    res+='(';
                }
            }else{
                 if(cnt!=1){
                    res+=')';
                }cnt--;
            }
        }
        return res;
    }
};