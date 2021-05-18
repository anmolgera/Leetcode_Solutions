class Solution {
public:
    
    int func(int n,vector<int>&dp){
        
        if(n<=0)  return 0;
        if(n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        int x = less(n);
        int s = x * ((1<<(x-1)));
        int y = n-(1<<x) +1;
        int z = n-(1<<x);
        return dp[n] = s+y+func(z,dp);
        
    }
    
    
    int less( int n ){
        int x =0;
        while((1<<x)<=n){
            x++;
        }
        
        return x-1;
    }
    vector<int> countBits(int num) {
    int n = num;
    vector<int> dp(n+1,0);
    for(int i=1; i<=num; i++){
        dp[i] = dp[i>>1] + (i&1);
    }
    return dp;
    }
};