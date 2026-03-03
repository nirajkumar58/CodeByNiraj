class Solution {
public:
    char findKthBit(int n, int k) {
        vector<string> s(n+1);
        s[1]="0";
        for(int i=2; i<n+1; i++){
            string t=s[i-1];
            reverse(t.begin(),t.end());
            for(char &c : t) {
                c=(c=='0')?'1':'0';
            }
            s[i]=s[i-1]+"1"+t;
        }
        char ch=s[n][k-1];
        return ch;
    }
};