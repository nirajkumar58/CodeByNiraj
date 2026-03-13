class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int sum=0;
        int count=0;
        sort(people.begin(),people.end());
        for(int i=0,j=people.size()-1;i<=j;){
            
            if(people[i]+people[j]<=limit) {
                count++;
                i++;
                j--;
            }
            else{
                count++;
                j--;
            }

        }
        return count;
    }
};