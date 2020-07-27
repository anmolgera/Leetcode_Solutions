class Solution {
public:
    string shortestCommonSupersequence(string s, string t) {
        
      vector<vector<int>> dp(s.size() + 1, vector<int> (t.size() + 1, 0));
        for(int i = 1; i <= s.size(); i++) {
            for(int j = 1; j <= t.size(); j++) {
                if(s[i-1] == t[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        int len = dp[s.size()][t.size()];
        int i = s.size(), j = t.size();
        string lcs;
        while(i > 0 and j > 0) {
            if(s[i-1] == t[j-1]) {
                lcs.push_back(s[i-1]);
                i--;
                j--;
            } else if(dp[i-1][j] > dp[i][j-1])
                i--;
            else
                j--;
        }
        reverse(lcs.begin(), lcs.end());
        string res;
        i = 0, j = 0;
        for(auto &c : lcs) {
            while(s[i] != c and i < s.size())
                res += s[i++];
            while(t[j] != c and j < t.size())
                res += t[j++];
            res += c, i++, j++;
        }
        return res + s.substr(i) + t.substr(j);
        
        
    }
};