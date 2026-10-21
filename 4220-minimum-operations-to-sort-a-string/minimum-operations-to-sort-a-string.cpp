class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        string t=s;
        sort(t.begin(),t.end());
        if(n<=2){
            if(s!=t) return -1;
            else return 0;
        }
        map<char,int> mp;
        for(int i=0; i<n; i++)mp[s[i]]++;
        if(s==t) return 0;
       if(s[0]==t[0] || s[n-1]==t[n-1]) return 1;
       // sdsdjnsdfa
       if(s[0]==t[n-1] && s[n-1]==t[0] &&(mp[s[0]]==1 && mp[s[n-1]]==1)) return 3; 
        else return 2;
    }
};