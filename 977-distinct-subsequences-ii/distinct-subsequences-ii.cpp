class Solution {
public:
    int distinctSubseqII(string s) {
        const long long MOD = 1e9 + 7;

        vector<long long> dp(s.size() + 1, 0);
        unordered_map<char, int> last;

        dp[0] = 1;

        for (int i = 1; i <= (int)s.size(); i++) {
            char c = s[i - 1];

            dp[i] = (2 * dp[i - 1]) % MOD;

            if (last.count(c)) {
                dp[i] = (dp[i] - dp[last[c] - 1] + MOD) % MOD;
            }

            last[c] = i;
        }

        return (dp[s.size()] - 1 + MOD) % MOD;
    }
};