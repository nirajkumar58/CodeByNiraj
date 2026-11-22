class Solution {
public:
    bool checkString(string s) {
        bool a=false;
        bool b=false;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a') a=true;
            else b=true;
            if((a && b)&& s[i]=='a' ) return false;
        }
        return true;
    }
};