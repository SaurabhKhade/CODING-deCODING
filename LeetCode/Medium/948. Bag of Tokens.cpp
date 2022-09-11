class Solution {
public:
   static int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(begin(tokens), end(tokens));
        int max_score = 0;
        int score = 0;
        int s = 0;
        int p = size(tokens) - 1;
        while (s <= p) {
            if (tokens[s] <= power) {
                power -= tokens[s++];
                ++score;
                max_score = max(max_score, score);	
            } else if (score > 0) {
                power += tokens[p--];
                --score;
            } else {
                break;
            }
        }
        return max_score;
    }
};