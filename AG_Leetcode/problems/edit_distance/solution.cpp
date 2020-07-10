class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int l = word1.length();
        int r = word2.length();
        
        
        
        int dp[l+1][r+1];
        
        
        for(int i =0; i<=l; i++){
            
            for(int j =0; j<=r; j++){
                
                
                if(i==0){
                    
                    dp[i][j] = j;
                }
                
                
                
                else if(j==0){
                    
                    dp[i][j] = i;
                }
                
              else if(word1[i-1]==word2[j-1]){
                  
                  
                  dp[i][j] = dp[i-1][j-1];
              }  
                
                
        else dp[i][j] = 1 + min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
                
                
                
                
                
                
            }
            
            
        }
        
        
        
        
        
     return dp[l][r];   
        
        
        
        
        
        
        
    }
};