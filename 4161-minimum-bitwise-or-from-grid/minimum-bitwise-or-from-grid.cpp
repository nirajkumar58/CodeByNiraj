class Solution {
public:
    int minimumOR(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=20; i>=0; i--){
            int target=ans|((1<<i)-1);
            bool possible=true;
            for(auto& row:grid){
                bool check=false;
                for(auto &x:row){
                    if((x|target)==target) check=true;
                }
                if(check==false) possible=false;
            }
            if(possible==false) ans|=1<<i;
        }
        return ans;
    }
};