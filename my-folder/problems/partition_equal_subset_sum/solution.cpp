class Solution {
public:
    
     
    bool knapsack(vector<int>&nums,int n, int sum, vector<vector<int>> &dp){
       
    if(n==0 && sum!=0){
        
        return false;
    }
    if(sum==0){
        return true;
    }
    if(dp[n][sum]!=-1){
        return dp[n][sum];
    }
        
    if(nums[n-1]<=sum){
        
        return dp[n][sum] = knapsack(nums,n-1,sum-nums[n-1],dp) ||  knapsack(nums,n-1,sum,dp); 
    }
    
    else {
        return dp[n][sum] = knapsack(nums,n-1,sum,dp);
    }
        
    }
    
    
    bool canPartition(vector<int>& nums) {
    
    int n = nums.size();
        int sum =0;
    for(int i =0; i<nums.size(); i++){
    sum+=nums[i];
    }
        
    if(sum%2){
        return false;
    }
        
    else {
        sum/=2;
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return knapsack(nums,n,sum,dp);
    }
    
        
    }
};