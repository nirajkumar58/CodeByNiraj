class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum1=0;
        int sum2=0;
        for(int x: aliceSizes) sum1+=x;
        for(int y:bobSizes) sum2+=y;
        int diff=(sum2-sum1)/2;
        unordered_set<int>bobset;
        for(int x:bobSizes) bobset.insert(x);
        for(int x:aliceSizes ){
            int y=x+diff;
            if(bobset.count(y)) return{x,y};
        }
        return {};
    }
};