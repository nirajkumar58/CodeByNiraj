class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int mx = 0;
        vector<int> f(26,0);
        for (char x:tasks) {
            int t = x-'A';
            f[t]++;
            mx = max(mx,f[t]);
        }
        int cnt = 0;
        for (int x:f){
            if(x==mx) cnt++;
        }
        int na=tasks.size();
        return max(na,(mx-1)*(n + 1) + cnt);
    }
};