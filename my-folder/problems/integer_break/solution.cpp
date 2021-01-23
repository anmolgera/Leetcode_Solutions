class Solution {
public:
    int dp[60];
    int mx = INT_MIN;
    int integerBreak(int n) {
        
   
        if( n<=2){
            return dp[n] =1;
        }
        
        if(n==3){
            return dp[n] = 2;
        }
        
        if(dp[n]!=0){
            return dp[n];
        }

        for(int i =1; i<n; i++){
            
          mx = max({mx,integerBreak(n-i)*i,i*(n-i)});
        }
        return dp[n] =  mx;
    }
};