class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(0);
        int ans=0;
        int n=s.size();
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                st.push(i+1);
            }else{
                st.pop();
                if(st.empty()){
                    st.push(i+1);
                }else{
                    ans=max(ans,i-st.top()+1);
                }
            }
        }
        return ans;
    }
};