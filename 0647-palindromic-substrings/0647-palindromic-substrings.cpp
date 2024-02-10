class Solution {
public:

    int longestPalindrome(std::string s) {
        if (s.length() <= 1) {
            return 0;
        }
        
        int max_len = 1;
        int start = 0;
        int end = 0;
        int ct=0;
        std::vector<std::vector<bool>> dp(s.length(), std::vector<bool>(s.length(), false));
        
        for (int i = 0; i < s.length(); ++i) {
            dp[i][i] = true;
            for (int j = 0; j < i; ++j) {
                if (s[j] == s[i] && (i - j <= 2 || dp[j + 1][i - 1])) {
                    dp[j][i] = true;
                    ct++;
                    if (i - j + 1 > max_len) {
                        max_len = i - j + 1;
                        start = j;
                        end = i;
                    }
                }
            }
        }
        
        return ct;
    }

    int countSubstrings(string s) {
        return longestPalindrome(s)+s.size();
    }
};