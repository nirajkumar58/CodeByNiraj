#include <bits/stdc++.h>
class Solution {
    void fnc(int count,int i, set<string> &st,string &curr, int n, string &s, int &m){
        if(count<0) return;
        if(i==n){
            if(count==0){
                if(curr.size()>m){
                    m=curr.size();
                    st.clear();
                    st.insert(curr);
                }
                else if(curr.size()==m){
                    st.insert(curr);
                }
            }
            return;
        }
        if(s[i]!='('&&s[i]!=')'){
        curr.push_back(s[i]);
        fnc(count,i+1,st,curr,n,s,m);
        curr.pop_back();
        return;
        }
        curr+=s[i];
        if(s[i]=='('){
            fnc(count+1,i+1,st,curr,n,s,m);
        }else if(s[i]==')'){
            fnc(count-1,i+1,st,curr,n,s,m);
        }
        curr.pop_back();
        fnc(count,i+1,st,curr,n,s,m);
        return;
    }
public: 
    vector<string> removeInvalidParentheses(string s) {
        int n=s.size();
        set<string> st;
        int m=0;
        string t;
        fnc(0,0,st,t,n,s,m);
        vector<string> v(st.begin(), st.end());
        return v;
    }
};