class Solution {
public:
    string trimTrailingVowels(string s) {
        int n=s.size();
        string res="";
        bool check=false;
        for(int i=n-1; i>=0; i--){
            if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&& check==false){
                continue;
            }
            else{
                check=true;
                res+=s[i];
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};