class Solution {
public:
    
    int maxprofit1(int k, vector<int>&prices, vector<vector<vector<int>>> &dp, int idx, int s ){
        
        if(k<=0 || idx>=prices.size()){
            return 0;
        }
        
        if(dp[s][k][idx]!=-1){
            return dp[s][k][idx];
        }
        
        if(s==0){
         return dp[s][k][idx] =  max(maxprofit1(k,prices,dp,idx+1,1) - prices[idx], maxprofit1(k,prices,dp,idx+1,0));    
            
        }
        
        else {
          return  dp[s][k][idx] = max(maxprofit1(k-1,prices,dp,idx+1,0) + prices[idx] ,  maxprofit1(k,prices,dp,idx+1,1));    
            
        }
        
        
        
        
    }
    int maxProfit(int k, vector<int>& prices) {
      int n = prices.size();
        
      if(k>=n/2){
      int ans =0;
      for(int i =1; i<prices.size(); i++){
        if(prices[i]-prices[i-1]>0){
            ans+=(prices[i]-prices[i-1]);
        }
        
      }
    
      return ans;
          
      }
      
    vector<vector<vector<int>>> dp(2,vector<vector<int>>(k+1,vector<int>(n,-1)));
    return maxprofit1(k,prices,dp,0,0);
        
    }
};