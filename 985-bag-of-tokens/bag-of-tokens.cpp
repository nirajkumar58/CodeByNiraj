class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        int maxScore = 0;

        while (!tokens.empty()) {

            int minVal = INT_MAX, maxVal = 0;
            int mini = -1, maxi = -1;

            for (int i = 0; i < tokens.size(); i++) {
                if (tokens[i] < minVal) {
                    minVal = tokens[i];
                    mini = i;
                }
                if (tokens[i] > maxVal) {
                    maxVal = tokens[i];
                    maxi = i;
                }
            }

            if (power >= tokens[mini]) {
                power -= tokens[mini];
                score++;
                maxScore = max(maxScore, score);
                tokens.erase(tokens.begin() + mini);
            }
            else if (score > 0) {
                power += tokens[maxi];
                score--;
                tokens.erase(tokens.begin() + maxi);
            }
            else {
                break;
            }
        }

        return maxScore;
    }
};