class Solution {
public:
    
    
    int dp[38] ={};
    int tribonacci(int n) {
        if(n==0){
            return n;
        }
        
        if(n==1 || n==2){
            return 1;
        }
        
        if(dp[n]!=0){
            return dp[n];
        }
        
        else return dp[n] = tribonacci(n-1)+tribonacci(n-2) + tribonacci(n-3);
    }
};