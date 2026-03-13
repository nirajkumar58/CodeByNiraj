class Solution {
public:
    int numTrees(int n) {
        int64_t C[39][39] = {};

        for(int i = 0; i <= 2 * n; ++i) {
            C[i][0] = C[i][i] = 1;

            for(int j = 1; j < i; ++j)
                C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
        }

        return C[2 * n][n] / (n + 1);
    }
};