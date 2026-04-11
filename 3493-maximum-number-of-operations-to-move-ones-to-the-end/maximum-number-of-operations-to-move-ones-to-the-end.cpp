class Solution {
public:
    int maxOperations(string s) {
        int n = s.size();
        int ones=0,ans=0;
        for(int i=0; i<n;){
            if (s[i]=='1'){
                ones++;
                i++;
            }else{
                int j=i;
                while(j<n && s[j]=='0') j++;
                if(ones>0){
                    ans+=ones;
                }
                i=j;
            }
        }

        return ans;
    }
};