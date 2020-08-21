class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstackleGrid) {
        
       int n = obstackleGrid.size();
       int m = obstackleGrid[0].size();
        
      // int dp[n+1][m+1];
        
       if(obstackleGrid[0][0]==1){
           
           return 0;
       } 
        
       obstackleGrid[0][0]=1; 
        
        
       for(int i=1; i<n; i++){
           
           
           obstackleGrid[i][0] = (obstackleGrid[i][0]==0 && obstackleGrid[i-1][0] ==1)? 1: 0;
       }
        
          
       for(int i=1; i<m; i++){
           
           
           obstackleGrid[0][i] = (obstackleGrid[0][i]==0 && obstackleGrid[0][i-1] ==1)? 1: 0;
       }
        
        for(int i =1; i<n; i++){
            
            
            for(int j =1; j<m; j++){
                
               if(obstackleGrid[i][j]==0){
                   
                   obstackleGrid[i][j] = obstackleGrid[i-1][j]+obstackleGrid[i][j-1];
               } 
                
               else obstackleGrid[i][j] =0; 
                
            }
        }
       return obstackleGrid[n-1][m-1]; 
    }
};