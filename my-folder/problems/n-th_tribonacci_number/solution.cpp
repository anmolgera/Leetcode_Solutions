class Solution {
public:
    int dp[38];
    
    int func(int n){
    if(n<=1) return n;
    if(n==2) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = func(n-3) + func(n-1) + func(n-2);
         
    }
    
    int tribonacci(int n) {
    for(int i =0; i<=37; i+=1){
        dp[i] =-1;
    } 
    
    return func(n);
    //return dp[n];
    }
};