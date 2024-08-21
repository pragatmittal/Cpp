class Solution {
public:
    int scoreOfString(string s) {
        int length = s.length();

        int score = 0;
        for (int i = 1; i < length; ++i) {
            score += abs(int(s[i] - s[i - 1]));
        }
        return score;
    }
};