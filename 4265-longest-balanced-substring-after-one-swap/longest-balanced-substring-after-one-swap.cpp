class Solution {
    int fnc(string s){
         int n=s.size();
        int dis=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        int zeros=0,ones=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0') zeros++;
            else ones++;
        }
        int balance=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                ones--;
                balance++;
            }
            else{
                zeros--;
                balance--;
            }
            if(balance==0){
                dis=i+1;
                continue;
            }
            if(mp.count(balance-2) && zeros>0){
                dis=max(dis,i-mp[balance-2]);

            }
             if(mp.count(balance+2) && ones>0){
                dis=max(dis,i-mp[balance+2]);
            }
            if(!mp.count(balance)){
                mp[balance]=i;
            }
        }
        return dis;
    }
public:
    int longestBalanced(string s) {
       int longest=fnc(s);
       reverse(s.begin(),s.end());
       longest=max(longest,fnc(s));
       return longest;

    }
};