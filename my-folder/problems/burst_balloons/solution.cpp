class Solution {
public:
    
    int func(vector<int>&nums, int i, int j, vector<vector<int>>&dp){
        
    if(i>=j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int mx = 0;
    for(int k = i; k<j; k++){
        
       int x = func(nums,i,k,dp)+func(nums,k+1,j,dp)+nums[i-1]*nums[k]*nums[j];
       mx = max(mx,x);
    }
     
    return dp[i][j] = mx;    
    }
    
    
    
    int maxCoins(vector<int>& nums) {
    
    nums.insert(nums.begin(),1);
    nums.push_back(1);
    int n = nums.size();
    vector<vector<int>> dp(n,vector<int>(n,-1));
    int x = func(nums,1,n-1,dp);
    return x;
    
        
    }
};