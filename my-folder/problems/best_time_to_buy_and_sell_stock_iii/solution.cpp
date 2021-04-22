class Solution {
public:
    
    int maxprofit(vector<int>&prices, vector<vector<vector<int>>> &dp, int k, int i, int choice){
      
        if(i>=prices.size() || k<=0){
            return 0;
        }
        
        if(dp[choice][k][i]!=-1){
            
            return dp[choice][k][i];
        }
        if(choice==0){
            
            return dp[choice][k][i] =  max(maxprofit(prices,dp,k,i+1,1)-prices[i],maxprofit(prices,dp,k,i+1,0));
            
        }
        
        else {
            
            
            return dp[choice][k][i] = max(maxprofit(prices,dp,k-1,i+1,0) + prices[i],maxprofit(prices,dp,k,i+1,1));
            
        }
        
        
        
        
    }
    
    
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    vector<vector<vector<int>>> dp(2,vector<vector<int>>(3,vector<int>(n,-1)));
    return maxprofit(prices,dp,2,0,0);
    }
};