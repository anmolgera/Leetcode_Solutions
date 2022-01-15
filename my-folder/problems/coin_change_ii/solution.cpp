class Solution {
public:
    int dp[301][5001];
    int func(int amount, vector<int> coins, int n){
    if(amount != 0 && n == 0) return 0;    
    if(amount == 0) return 1;
    if(dp[n][amount]!=-1){
       return dp[n][amount];
    }
    if(coins[n-1] <= amount) {
       return dp[n][amount] = func(amount - coins[n-1], coins, n)  + func(amount, coins, n-1);
    }
    
       return dp[n][amount] = func(amount, coins, n-1);    
        
    }
    
    int change(int amount, vector<int>& coins) {
    int n = coins.size();
    //vector<vector<int>> dp(n+1, vector<int> (amount+1,-1));
    memset(dp,-1,sizeof(dp));
    return func(amount, coins,n);    
    }
};