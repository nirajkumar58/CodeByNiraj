class Solution {
public:
    int minOperations(string s) {
      int cnt=0;
      bool check=true;
      char ch=s[0];
      int n=s.size();
      for(int i=0; i<n; i++){
        if(ch==s[i] && check){
            check=!check;
        }
        else if(ch!=s[i]&& !check){
            check=!check;
        }
        else{
            cnt++;
            check=!check;
        }
      }  
      check=true;
      int cnt2=0;
      ch=s[0];
      for(int i=0; i<n; i++){
        if(ch==s[i] && !check){
            check=!check;
        }
        else if(ch!=s[i]&& check){
            check=!check;
        }
        else{
            cnt2++;
            check=!check;
        }
      }  
      return min(cnt,cnt2);
    }
};