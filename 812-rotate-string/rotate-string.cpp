class Solution {
public:
    bool rotateString(string s, string goal) {
            string t=s+s;
            // if(s.substr(goal))
            int m=goal.size();
            int n=s.size();
            if(m!=n) return false;
            for(int i=0; i<t.size()-goal.size(); i++){
                if(t.substr(i,m)==goal) return true;
            }
            return false;
    }
};