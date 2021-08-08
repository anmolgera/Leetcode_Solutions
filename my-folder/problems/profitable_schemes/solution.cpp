class Solution {
public:
    
    const int mod = 1e9+7;
    const int sz = 101;
    
    
    int func(int idx, int p, vector<int>&group, vector<int>&profit, int n){
        
    if(idx>=profit.size()) return 0;   
    if(dp[idx][p][n]!=-1) return dp[idx][p][n];
    int ans =0;
    if(n>=group[idx]){
        int diff = p-profit[idx];
        if(diff<=0) ans += (1+func(idx+1,0,group,profit,n-group[idx])%mod);
        else ans+= func(idx+1,diff,group,profit,n-group[idx]%mod);
    
    }
    ans%=mod;
    ans+= (func(idx+1,p,group,profit,n)%mod); 
    ans%=mod;
    return dp[idx][p][n]= ans;
        
        
        
    }
    
    
    int dp[101][101][101];  
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
    
    for(int i =0; i<101; i++){
        for(int j =0; j<101; j++){
            for(int k =0; k<101; k++){
                dp[i][j][k] =-1;
            }
        }
    }
    int ans = func(0,minProfit,group,profit,n);
    
    if(minProfit==0) ans++;
    ans%=mod;
    
    return ans;
    }
};