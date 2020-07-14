class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        
        if(matrix.size()==0){
            
            return 0;
        }
        
        
        int m = matrix.size();
        int n = matrix[0].size();
        int sz =0;
        
        vector<vector<int>>dp(m,vector<int> (n,0));
        
        for(int i =0; i<m; i++){
            
            for(int j =0; j<n; j++){
                
                if(i==0 || j==0 || matrix[i][j]=='0'){
                    
                    
                    dp[i][j] =matrix[i][j]-'0';
                    
                    
                }
                
                else dp[i][j] = min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
                sz = max(sz,dp[i][j]);
                
            }
            
            
            
            
            
        }
        
        
      return sz*sz;  
        
        
    }
};