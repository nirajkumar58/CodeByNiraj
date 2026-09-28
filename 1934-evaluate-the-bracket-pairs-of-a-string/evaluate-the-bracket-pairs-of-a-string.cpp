class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        map<string,string> mp;
        for(int i=0; i<k.size();i++){
            mp[k[i][0]]=k[i][1];
        }
        int i=0;
        string res="";
        while(i<s.size()){
            if(s[i]=='('){
                i++;
                string temp="";
                while(s[i]!=')'){
                    temp+=s[i];
                    i++;
                }
                // cout<<temp<<" ";
                if(mp.find(temp)!=mp.end())
                res+=mp[temp];
                else res+="?";
            }else{
                res+=s[i];
            }
            i++;
        }
        return res;
    }
};