#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minNumberOfSeconds(int h, vector<int>& w) {

        long long l = 0, r = 1e18, ans = r;

        while(l <= r){
            long long mid = (l+r)/2;

            long long total = 0;

            for(int t : w){

                long long x = (sqrt(1 + 8.0*mid/t) - 1)/2;

                total += x;

                if(total >= h) break;
            }

            if(total >= h){
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }

        return ans;
    }
};