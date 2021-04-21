class Solution {
public:
    
    int ans(vector<int>&prices, int idx, int s, vector<vector<int>> &dp ){
        
        if(idx>=prices.size()){
            return 0;
        }
        
        if(dp[s][idx]!=-1){
            return dp[s][idx];
        }
        
        if(s==0){
          
           return dp[s][idx] =  max( ans(prices,idx+1,1,dp) - prices[idx], ans(prices,idx+1,0,dp));
            
         }
        
        else {
            
           return dp[s][idx] = max( ans(prices,idx+2,0,dp) +  prices[idx], ans(prices,idx+1,1,dp));
            
        }
        
        
        
        
        
    }
    
    
    
    int maxProfit(vector<int>& prices) {
     
     int n = prices.size();
     vector<vector<int>> dp(2,vector<int>(n,-1));
     
     return ans(prices,0,0,dp);
        
        
    }
};