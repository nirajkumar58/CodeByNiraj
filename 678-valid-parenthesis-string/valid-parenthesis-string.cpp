class Solution {
public:
    bool checkValidString(string s) {
       stack<int> a,b;
       for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            a.push(i);
        }else if(s[i]=='*'){
            b.push(i);
        }else{
            if(!a.empty()){
                a.pop();
            }else if(!b.empty()){
                b.pop();
            }else{
                return false;
            }
        }
       }
       while(!a.empty() && !b.empty()){
        if(a.top()>b.top()){
            return false;
        }a.pop();
        b.pop();
       }
       return a.empty();
    }
};
