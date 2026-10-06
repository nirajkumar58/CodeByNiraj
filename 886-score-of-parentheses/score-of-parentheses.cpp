class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        int n=s.size();
        for(int i=0; i<n; i++){
            char c=s[i];
            if(c=='('){
                st.push(0);
            }else{
                int a=st.top();
                st.pop();
                int b=0;
                if(a==0){
                    b=1;
                }
                else{
                    b=2*a;
                }
                st.top()+=b;
            }
        }
        return st.top();
    }
};