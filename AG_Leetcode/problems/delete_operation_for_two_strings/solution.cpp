class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int n = word1.length();
        int m = word2.length();
        
        
        vector<vector<int>> dp(n+1, vector<int> (m+1,0));
        
        
        for(int i =0; i<=n; i++){
            
            for(int j =0; j<=m; j++){
                
                
                if(i==0 || j==0){
                    
                    dp[i][j] =0;
                }
                
                
                
                else if(word1[i-1]==word2[j-1]){
                    
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                
                
                else if(word1[i-1]!=word2[j-1]){
                    
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
                
                
            }
            
            
            
        }
        
        
        
        
        
        return n+m -2*dp[n][m];
        
        
        
        
    }
};