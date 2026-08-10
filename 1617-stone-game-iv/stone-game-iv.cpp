class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool> win(n + 1, false);
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j * j <= i; j++) {
                if(!win[i - j*j]) {
                    win[i] = true;
                    break;
                }
            }
        }
        return win[n];
    }
};