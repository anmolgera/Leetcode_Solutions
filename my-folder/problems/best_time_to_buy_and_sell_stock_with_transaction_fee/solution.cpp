class Solution {
public:
    
    int maxprofit(vector<int>&prices,vector<vector<int>> &dp, int i ,int choice, int fee){
        
        if(i>=prices.size()){
            return 0;
        }
        
        if(dp[choice][i]!=-1){
            
            return dp[choice][i];
        }
        
        if(choice==0){
            
         return dp[choice][i] = max(maxprofit(prices,dp,i+1,1,fee)-prices[i]-fee,maxprofit(prices,dp,i+1,0,fee));   
            
        }
        
        
        else {
            
        return dp[choice][i] = max(maxprofit(prices,dp,i+1,0,fee)+prices[i],maxprofit(prices,dp,i+1,1,fee));   
          
            
    
        }
            
        
        
        
        
    }
    
    
    int maxProfit(vector<int>& prices, int fee) {
     
    int n = prices.size();
    vector<vector<int>> dp(2,vector<int>(n,-1));
    return maxprofit(prices,dp,0,0,fee);
        

    }
};