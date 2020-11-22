class Solution {
public:
    int numSquares(int n) {
        
        
        int dp[n+1];
      // memset(dp,INT_MAX,sizeof(dp));
        
        for(int i =0; i<=n; i++){
            
            dp[i] = INT_MAX;
        }
        dp[0]=0;
       // dp[1] =1;
        
        
        
        for(int i =1; i<=n; i++){
            
            for(int j =1; j*j<=i; j++){
                
                dp[i] = min(dp[i-j*j]+1,dp[i]);
                
            }
            
            
        }
        
        
        return dp[n];
       
        
        
        
        
    }
};