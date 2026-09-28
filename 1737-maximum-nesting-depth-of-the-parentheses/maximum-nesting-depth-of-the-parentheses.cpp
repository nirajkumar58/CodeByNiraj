class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int res=0;
        int cnt=0;;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                cnt++;
                res=max(cnt,res);
            }
            else if(s[i]==')'){
                cnt--;
            }
        }
        return res;
    }
};