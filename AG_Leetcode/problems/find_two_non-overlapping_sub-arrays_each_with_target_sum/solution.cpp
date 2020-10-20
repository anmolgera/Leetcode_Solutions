class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int tar) {
        int dp[100005][3];
        map<int,int> sm;
       int n = arr.size(), cursum = 0;
        sm[0] = 0;
        memset(dp, 127, sizeof(dp));  //initialize to INF
        for (int i = 0; i < 100005; i++) dp[i][0] = 0;  //if we doesn't find a subarray, len = 0
        
        for (int i = 1; i <= n; i++) {
            int d = -1;  //initialize to -1
            cursum += arr[i-1];
            sm[cursum] = i;
            if (sm.count(cursum - tar)) d = sm[cursum-tar];
            
            for (int j = 1; j <= 2; j++) {  // if asking for n subarrays, change 2 to n
                dp[i][j] = min(dp[i][j], dp[i-1][j]);  //dp[i][j] must <= dp[i-1][j]
                if (d != -1) dp[i][j] = min(dp[i][j],dp[d][j-1] + i - d);
            }
        }
        if (dp[n][2] > 1e9) return -1;   // if asking for n subarrays, change 2 to n
        return dp[n][2];   // if asking for n subarrays, change 2 to n
        
    }
};