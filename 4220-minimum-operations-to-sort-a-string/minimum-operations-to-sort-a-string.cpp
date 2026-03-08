class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        if(n==1) return 0;
        if(n==2){
            if(s[0]<=s[1]) return 0;
            else return -1;
        }
        bool check = true;
        for(int i=0; i < n-1; i++){
            if(s[i] > s[i+1]){
                check = false;
                break;
            }
        }
        if(check) return 0;

        char mn = *min_element(s.begin(),s.end());
        char mx = *max_element(s.begin(),s.end());
        if(s[0]==mn|| s[n-1]==mx) return 1;
        for(int i=0; i<n-1; i++){
            if(s[i]==mn) return 2;
        }
        for(int i=1; i<n; i++){
            if(s[i]==mx) return 2;
        }

        return 3;
    }
};