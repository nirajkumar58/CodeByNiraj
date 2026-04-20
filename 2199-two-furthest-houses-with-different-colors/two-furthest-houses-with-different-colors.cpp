class Solution {
public:
    int maxDistance(vector<int>& colors) {
       int n=colors.size();
       int dis=0;
      int i=0,j=n-1;
      while(i<j){
        if(colors[i]==colors[j]){
            j--;
        }
        else{
            break;
        }
      } 
      dis=j-i;
      i=0; j=n-1;
      while(i<j){
        if(colors[i]==colors[j]){
            i++;;
        }
        else{
            break;
        }
      } 
       dis=max(dis,j-i);
        return dis;
    }
};