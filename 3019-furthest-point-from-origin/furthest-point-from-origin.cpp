class Solution {
public:
    int furthestDistanceFromOrigin(string s) {
        int a=0,b=0,c=0;
        for(char ca:s){
            if(ca=='L') a++;
            else if(ca=='R') b++;
            else c++; 
        }
        return abs(a-b)+c;
    }
};