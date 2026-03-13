class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int> ans(deck.size(),0);
        queue<int> q;
        for(int i=0;i<deck.size();i++){
            q.push(i);
        }
      
for(int i=0;i<deck.size();i++){
        int ele=q.front();
        q.pop();
     ans[ele]=deck[i];
        if(!q.empty()){
            int ele1=q.front();
            q.pop();
            q.push(ele1);
        }
    }
   
    return ans;
    }
};