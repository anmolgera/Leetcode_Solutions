class Solution {
public:
    
    int recur(vector<int>&prices, int fees, int idx, int choice, vector<vector<int>>&dp)     {
        
        if(idx>=prices.size()) return 0;
        if(dp[choice][idx]!=-1) return dp[choice][idx];
        if(choice==0){
        return dp[choice][idx] =  max(recur(prices,fees,idx+1,1,dp)-prices[idx]-fees,recur(prices,fees,idx+1,0,dp));    
        }
        else {
            return dp[choice][idx] = max(recur(prices,fees,idx+1,0,dp)+prices[idx],recur(prices,fees,idx+1,1,dp));
        }
        
        
        
    }
    
    int maxProfit(vector<int>& prices, int fee) {
    int n = prices.size();
    vector<vector<int>>dp(2,vector<int>(n,-1));
    return recur(prices,fee,0,0,dp);
    }
};