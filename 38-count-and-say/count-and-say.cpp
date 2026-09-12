class Solution {
public:
    string countAndSay(int n) {
        string s = "1";

        for (int k = 1; k < n; k++) {
            string ans = "";
            int i = 0;

            while (i < s.size()) {
                int count = 0;

                while (i + count < s.size() &&
                       s[i] == s[i + count]) {
                    count++;
                }

                ans += to_string(count);
                ans += s[i];

                i += count;
            }

            s = ans;
        }

        return s;
    }
};