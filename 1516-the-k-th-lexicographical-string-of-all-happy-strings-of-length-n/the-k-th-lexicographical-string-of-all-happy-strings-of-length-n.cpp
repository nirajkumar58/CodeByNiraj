class Solution {
    void fnc(int n, string temp, vector<string> &v){
        if(temp.size()==n){
            v.push_back(temp);
            return;
        }
        for(char ch:{'a','b','c'}){
            if(temp.size()>0&&temp.back()==ch) continue;
            fnc(n,temp+ch,v);
        }
    }
public:
    string getHappyString(int n, int k) {
        vector<string> s;
        fnc(n,"",s);
        sort(s.begin(),s.end());
        if(k>s.size())
         return "";
        return s[k-1];
    }
};