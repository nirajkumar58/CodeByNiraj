class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        set<string> st;
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            string t1,t2;
            for(int k=0;k<temp.size();k++){
                if(k%2==0)
                {t1+=temp[k];}
                else {t2+=temp[k];}
            }
            sort(t1.begin(),t1.end());
            sort(t2.begin(),t2.end());
            string ans=t1+t2;
            st.insert(ans);
        }
        return st.size();
    }
};