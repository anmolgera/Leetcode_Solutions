class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int l =text1.length();
        int r = text2.length();
        
        int dp[l+1][r+1];
        
        
        
        for(int i =0; i<=l; i++){
            
            for(int j =0; j<=r; j++){
                
              
                if(j ==0 || i==0){
                    
                    dp[i][j] =0;
                }
                
                
               else if(text1[i-1]==text2[j-1]){
                    
                    dp[i][j] = 1+dp[i-1][j-1];
                    
                    
                }
                
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                
                
                
                
                
                
                
            }
            
            
            
            
            
        }
        
       return dp[l][r]; 
        
    }
};