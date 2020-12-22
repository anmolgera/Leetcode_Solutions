class Solution {
public:
    
    double dp[27][27][102];
    
    
    double knight( int N, int k, int r, int c){
        if(r<0 || c<0 || r>=N || c>=N){
            return 0;
        }
        
        if(k==0){
            return 1;
        }
        if(dp[r][c][k]!=-1){
            return dp[r][c][k];
        }
        double total = knight(N, k-1, r+2,c+1) + knight(N,k-1,r+2,c-1) + knight(N,k-1,r+1,c+2) + knight(N,k-1,r+1,c-2)+  knight(N,k-1,r-1,c+2) +  knight(N,k-1,r-1,c-2)
            + knight(N,k-1,r-2,c-1) + knight(N,k-1,r-2,c+1) ;
          return  dp[r][c][k] = total/8;
          
        
    }
    double knightProbability(int N, int K, int r, int c) {
        
        for(int i =0; i<=25; i++){
            for(int j =0; j<=25; j++){
                for(int k =0; k<=100; k++){
                    dp[i][j][k] =-1;
                }
            }
        }
        
        return knight(N,K,r,c);
    }
};