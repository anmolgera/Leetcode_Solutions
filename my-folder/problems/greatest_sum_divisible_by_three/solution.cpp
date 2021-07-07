class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
    
    vector<int> dp(3,0);
    
    for(int i =0; i<nums.size(); i++){
        
       vector<int> prevdp = dp; 
       for(int j =0; j<3; j++){
        
        dp[(nums[i]+prevdp[j])%3] = max(dp[(nums[i]+prevdp[j])%3],nums[i]+prevdp[j]);
        
        }
        
    }
        
    return dp[0];
        
        
    }
};