class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        int n= s.length();
        
        string s2 = s;
        
         reverse(s.begin(),s.end());
        
        int dp[n+1][n+1];
        
        
        for(int i =0; i<=n; i++){
            
            
            
            for(int j =0; j<=n; j++){
                
                if(i== 0 || j==0){
                    
                    dp[i][j]=0;
                }
                
                else if(s[i-1]==s2[j-1]){
                    
                    dp[i][j] = dp[i-1][j-1]+1;
                    
                    
                }
                
                else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                
                
                
                
                
            }
        }
        
        
        
        
    return dp[n][n];    
        
        
    }
};