class Solution {
public:
    int findLength(vector<int>& a, vector<int>& b) {
        int m = a.size(), n = b.size();
        if (!m || !n) return 0;
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        int res = 0;
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n-1; j >= 0 ; j--) {
                res = max(res, dp[i][j] = a[i] == b[j] ? 1 + dp[i+1][j + 1] : 0);
            }
        }
        return res;
    }
};