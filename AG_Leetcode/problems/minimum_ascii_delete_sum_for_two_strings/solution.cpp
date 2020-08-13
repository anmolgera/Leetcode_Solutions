class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
       
        
        int m = s1.length();
        int n = s2.length();
        
        
        
        vector<vector<int>> dp(m+1,vector<int> ( n+1,0));
        
        
        for(int j =1; j<=n; j++){
            
            dp[0][j] = dp[0][j-1]+s2[j-1];
            
        }
        
        
        for(int i =1; i<=m; i++){
            
            dp[i][0] = dp[i-1][0] + s1[i-1];
            
         }
        
        for(int i =0; i<=m; i++){
            
            
            for(int j=0; j<=n; j++){
                
                
                if(i==0 || j==0){
                    
                    continue;
                }
                
                
                if(s1[i-1]==s2[j-1]){
                    
                  dp[i][j] = dp[i-1][j-1];  
                    
                    
                }
                
                else if(s1[i-1]!=s2[j-1]){
                    
                    
                    dp[i][j] = min(dp[i-1][j] + s1[i-1],dp[i][j-1] + s2[j-1]);
                }
                
                
                
                
            }
            
            
            
        }
        
        
        
       return dp[m][n]; 
        
        
        
    }
};