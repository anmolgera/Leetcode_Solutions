class Solution {
public:
    int dp[101][10001];
    int solve(int k, int n){
        
        if(n==0|| n==1){
            return n;
        }
        
        if(k==1){
            return n;
        }
        
        if(dp[k][n]!=-1){
            return dp[k][n];
        }
        
        int ans = INT_MAX;
        int l =1;
        int r = n;
        while(l<r){
            int mid = l+(r-l)/2;
            int left = solve(k-1,mid-1);
            int rig =  solve(k,n-mid);
            int temp = 1+max(left,rig);
            
            if(left < rig) {
                l= mid+1;
            }
            
            else {
                r = mid-1;
            }
           ans = min(ans,temp);          
        }
        
        return dp[k][n] = ans;
        
    }
    
    
    
    int superEggDrop(int K, int N) {
         vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
        int m = 0;
        while (dp[m][K] < N) {
            m++;
            for (int k = 1; k <= K; ++k)
                dp[m][k] = dp[m - 1][k - 1] + dp[m - 1][k] + 1;
        }
        return m;
    }
};