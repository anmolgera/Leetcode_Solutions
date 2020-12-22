class Solution {
public:
    
    int dp[55][55][155];
    long long int mod = 1000000007;
   /* for(int i =0; i<55; i++){
        for(int j =0; j<55; j++){
            dp[i][j] =-1;
        }
    }*/
    
    int find(int m, int n, int N, int i, int j){
        if(i<0 || j <0 || i==m || j==n || N<0){
            return 1;
        }
        
        if(N==0){
            return 0;
        }
        
        if(dp[i][j][N]!=-1){
            return dp[i][j][N]%mod;
        }
         dp[i][j][N] = (find(m,n,N-1,i-1,j)%mod+ find(m,n,N-1,i,j-1)%mod+
             find(m,n,N-1,i+1,j)%mod + find(m,n,N-1,i,j+1)%mod)%mod;
        //dp[i][j][N]%=mod;
        return dp[i][j][N]%mod;
        
    }
    int findPaths(int m, int n, int N, int i, int j) {
        for(int k =0; k<55; k++){
        for(int z =0; z<55; z++){
            for(int x =0; x<155; x++){
            dp[k][z][x] =-1;
                
            }
        }
    }
        int x = find(m,n,N,i,j);
        return dp[i][j][N]==-1? 0 : dp[i][j][N];
    } 
};