class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> res;
        string s="";
        int a=n;
        string t="";
        while(a>0){
            s+=".";
            t+="#";
            a--;
        }
        res.push_back(s);
        t[n-1]='.';
        while(m>1){
            res.push_back(t);
            m--;
        }
        return res;
    }
};