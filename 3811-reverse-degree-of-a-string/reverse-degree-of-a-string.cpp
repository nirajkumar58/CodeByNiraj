class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int t=0;
        for(int i=0; i<n; i++){
            int a=s[i]-'a'+1;
            int b=26-a+1;
            t+=(i+1)*b;
        }
        return t;
    }
};