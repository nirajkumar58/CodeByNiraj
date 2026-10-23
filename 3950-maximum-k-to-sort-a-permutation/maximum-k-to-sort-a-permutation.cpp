class Solution {
public:
    int sortPermutation(vector<int>& v) {
        int n=v.size();
        vector<int> t=v;
        sort(t.begin(),t.end());
        vector<int> a;
        for(int i=0; i<n; i++){
            if(v[i]!=t[i]){
                a.push_back(v[i]);
            }
        }
        if(a.empty()) return 0;
        int res=a[0];
        for(int i=0; i<a.size(); i++){
            res=res&a[i];
        }
        return res;
    }
};